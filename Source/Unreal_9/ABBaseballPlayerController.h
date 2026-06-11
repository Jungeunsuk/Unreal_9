#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ABBaseballPlayerController.generated.h"

// 전방 선언
class UBaseballNoticeWidget;

UCLASS()
class UNREAL_9_API AABBaseballPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AABBaseballPlayerController();

    UFUNCTION(Exec)
    void SubmitGuessToServer(const FString& InGuess);

    UFUNCTION(Client, Reliable)
    void Client_ShowNoticeWidget(const FString& Message);

    UFUNCTION(Client, Reliable)
    void Client_RemoveNoticeWidget();

protected:
    virtual void BeginPlay() override;

    UPROPERTY()
    TSubclassOf<UBaseballNoticeWidget> NoticeWidgetClass;

    UPROPERTY()
    UBaseballNoticeWidget* ActiveNoticeWidget;

private:
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_SubmitGuess(const FString& InGuess);
};