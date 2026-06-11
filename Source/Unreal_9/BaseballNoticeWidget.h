#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseballNoticeWidget.generated.h"

// 전방 선언 (헤더 꼬임 방지)
class UTextBlock;

UCLASS()
class UNREAL_9_API UBaseballNoticeWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void SetNoticeText(const FString& Message);

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* NoticeTextBlock;
};