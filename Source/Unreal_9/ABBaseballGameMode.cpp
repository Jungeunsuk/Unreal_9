#include "ABBaseballGameMode.h"
#include "ABBaseballPlayerState.h"
#include "ABBaseballPlayerController.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

AABBaseballGameMode::AABBaseballGameMode()
{
    bIsGameActive = true;
    PlayerStateClass = AABBaseballPlayerState::StaticClass();
    PlayerControllerClass = AABBaseballPlayerController::StaticClass();
}

void AABBaseballGameMode::BeginPlay()
{
    Super::BeginPlay();
    GenerateSecretNumber();
}

void AABBaseballGameMode::GenerateSecretNumber()
{
    SecretNumber.Empty();
    TArray<int32> Pool = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (int32 i = 0; i < 3; ++i)
    {
        int32 Index = FMath::RandRange(0, Pool.Num() - 1);
        SecretNumber.Add(Pool[Index]);
        Pool.RemoveAt(Index);
    }

    UE_LOG(LogTemp, Warning, TEXT("[SERVER] 정답: %d%d%d"), SecretNumber[0], SecretNumber[1], SecretNumber[2]);
}

bool AABBaseballGameMode::ValidateInput(const FString& InputStr, FString& OutErrorMessage)
{
    if (InputStr.Len() != 3)
    {
        OutErrorMessage = TEXT("3자리 숫자가 아닙니다.");
        return false;
    }
    if (!InputStr.IsNumeric())
    {
        OutErrorMessage = TEXT("문자가 포함되어 있습니다.");
        return false;
    }

    TArray<TCHAR> CheckedChars;
    for (int32 i = 0; i < InputStr.Len(); ++i)
    {
        if (InputStr[i] == '0')
        {
            OutErrorMessage = TEXT("1~9 사이 숫자만 가능합니다.");
            return false;
        }
        if (CheckedChars.Contains(InputStr[i]))
        {
            OutErrorMessage = TEXT("중복된 숫자가 있습니다.");
            return false;
        }
        CheckedChars.Add(InputStr[i]);
    }
    return true;
}

FString AABBaseballGameMode::ProcessGuess(const FString& GuessStr)
{
    int32 Strikes = 0;
    int32 Balls = 0;

    TArray<int32> GuessDigits;
    for (int32 i = 0; i < GuessStr.Len(); ++i)
    {
        GuessDigits.Add(GuessStr[i] - '0');
    }

    for (int32 i = 0; i < 3; ++i)
    {
        if (GuessDigits[i] == SecretNumber[i]) Strikes++;
        else if (SecretNumber.Contains(GuessDigits[i])) Balls++;
    }

    if (Strikes == 0 && Balls == 0) return TEXT("OUT");

    FString ScoreResult = TEXT("");
    if (Strikes > 0) ScoreResult += FString::Printf(TEXT("%dS"), Strikes);
    if (Balls > 0) ScoreResult += FString::Printf(TEXT("%dB"), Balls);
    return ScoreResult;
}

void AABBaseballGameMode::OnPlayerSubmitGuess(AABBaseballPlayerController* PlayerController, const FString& GuessStr)
{
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("3. GameMode Processing..."));

    AABBaseballPlayerState* PS = PlayerController->GetPlayerState<AABBaseballPlayerState>();
    if (!PS || PS->GetCurrentAttempts() >= PS->GetMaxAttempts()) return;

    FString ErrorMessage;
    if (!ValidateInput(GuessStr, ErrorMessage))
    {
        PlayerController->Client_ShowNoticeWidget(ErrorMessage);
        return;
    }

    PlayerController->Client_RemoveNoticeWidget();
    PS->IncrementAttempts();

    FString Score = ProcessGuess(GuessStr);
    FString Status = PS->GetAttemptsStatusString();
    FString BroadcastMsg = FString::Printf(TEXT("[%s] %s -> %s %s"), *PS->GetPlayerName(), *GuessStr, *Score, *Status);

    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Magenta, FString::Printf(TEXT("4. 최종 판정 결과: %s"), *BroadcastMsg));

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (AABBaseballPlayerController* TargetPC = Cast<AABBaseballPlayerController>(It->Get()))
        {
            TargetPC->Client_ShowNoticeWidget(BroadcastMsg);
        }
    }

    if (Score.Equals(TEXT("3S")))
    {
        EndGame(PS->GetPlayerName(), false);
        return;
    }
    CheckGameOver();
}

void AABBaseballGameMode::CheckGameOver()
{
    bool bNoBodyLeft = true;
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (AABBaseballPlayerState* PS = Cast<AABBaseballPlayerState>(It->Get()->PlayerState))
        {
            if (PS->GetCurrentAttempts() < PS->GetMaxAttempts())
            {
                bNoBodyLeft = false;
                break;
            }
        }
    }

    if (bNoBodyLeft) EndGame(TEXT(""), true);
}

void AABBaseballGameMode::EndGame(const FString& WinnerName, bool bIsDraw)
{
    bIsGameActive = false;
    FString ClearMsg = bIsDraw ? TEXT("무승부입니다!") : FString::Printf(TEXT("승리자: %s"), *WinnerName);

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (AABBaseballPlayerController* TargetPC = Cast<AABBaseballPlayerController>(It->Get()))
        {
            TargetPC->Client_ShowNoticeWidget(ClearMsg);
        }
    }

    FTimerHandle ResetTimerHandle;
    GetWorldTimerManager().SetTimer(ResetTimerHandle, this, &AABBaseballGameMode::ResetGame, 5.0f, false);
}

void AABBaseballGameMode::ResetGame()
{
    GenerateSecretNumber();

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (AABBaseballPlayerController* TargetPC = Cast<AABBaseballPlayerController>(It->Get()))
        {
            if (AABBaseballPlayerState* PS = TargetPC->GetPlayerState<AABBaseballPlayerState>())
            {
                PS->ResetPlayerState();
            }
            TargetPC->Client_RemoveNoticeWidget();
        }
    }
    bIsGameActive = true;
}