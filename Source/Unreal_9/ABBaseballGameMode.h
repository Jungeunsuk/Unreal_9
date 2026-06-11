#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ABBaseballGameMode.generated.h"

class AABBaseballPlayerController;

UCLASS()
class UNREAL_9_API AABBaseballGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AABBaseballGameMode();

protected:
    virtual void BeginPlay() override;

public:
    void GenerateSecretNumber();
    bool ValidateInput(const FString& InputStr, FString& OutErrorMessage);
    FString ProcessGuess(const FString& GuessStr);

    void OnPlayerSubmitGuess(AABBaseballPlayerController* PlayerController, const FString& GuessStr);

private:
    void CheckGameOver();
    void EndGame(const FString& WinnerName, bool bIsDraw);
    void ResetGame();

    TArray<int32> SecretNumber;
    bool bIsGameActive;
};