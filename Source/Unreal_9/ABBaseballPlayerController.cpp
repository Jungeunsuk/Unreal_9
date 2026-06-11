#include "ABBaseballPlayerController.h"
#include "ABBaseballGameMode.h"
#include "BaseballNoticeWidget.h"
#include "Blueprint/UserWidget.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

AABBaseballPlayerController::AABBaseballPlayerController()
{
    ActiveNoticeWidget = nullptr;
}
    
void AABBaseballPlayerController::BeginPlay()
{
    Super::BeginPlay();
    NoticeWidgetClass = UBaseballNoticeWidget::StaticClass();
    bShowMouseCursor = true;
}

void AABBaseballPlayerController::SubmitGuessToServer(const FString& InGuess)
{

    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("1. Client Sent: %s"), *InGuess));

    Server_SubmitGuess(InGuess);
}

bool AABBaseballPlayerController::Server_SubmitGuess_Validate(const FString& InGuess)
{
    return InGuess.Len() > 0 && InGuess.Len() < 10;
}

void AABBaseballPlayerController::Server_SubmitGuess_Implementation(const FString& InGuess)
{
    // 2단계 통과 확인 (서버 도착)
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("2. Server RPC Received: %s"), *InGuess));

    AABBaseballGameMode* GM = Cast<AABBaseballGameMode>(GetWorld()->GetAuthGameMode());
    if (GM)
    {
        GM->OnPlayerSubmitGuess(this, InGuess);
    }
    else
    {
        // 만약 게임모드를 못 찾았다면 빨간 에러 출력!
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error: GameMode is NULL!"));
    }
}

void AABBaseballPlayerController::Client_ShowNoticeWidget_Implementation(const FString& Message)
{
    if (!IsLocalController() || !NoticeWidgetClass) return;

    if (!ActiveNoticeWidget)
    {
        ActiveNoticeWidget = CreateWidget<UBaseballNoticeWidget>(this, NoticeWidgetClass);
    }

    if (ActiveNoticeWidget)
    {
        ActiveNoticeWidget->SetNoticeText(Message);
        if (!ActiveNoticeWidget->IsInViewport())
        {
            ActiveNoticeWidget->AddToViewport();
        }
    }
}

void AABBaseballPlayerController::Client_RemoveNoticeWidget_Implementation()
{
    if (ActiveNoticeWidget && ActiveNoticeWidget->IsInViewport())
    {
        ActiveNoticeWidget->RemoveFromParent();
        ActiveNoticeWidget = nullptr;
    }
}