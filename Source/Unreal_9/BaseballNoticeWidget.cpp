#include "BaseballNoticeWidget.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Blueprint/WidgetTree.h"

void UBaseballNoticeWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // 루트 캔버스 안전 생성
    UCanvasPanel* RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
    if (!RootCanvas)
    {
        RootCanvas = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RootCanvas"));
        WidgetTree->RootWidget = RootCanvas;
    }

    // 텍스트 블록 안전 생성 및 캔버스 부착
    if (!NoticeTextBlock)
    {
        NoticeTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("NoticeText"));
        NoticeTextBlock->SetColorAndOpacity(FSlateColor(FLinearColor::Yellow));

        FSlateFontInfo FontInfo = NoticeTextBlock->GetFont();
        FontInfo.Size = 32.f;
        NoticeTextBlock->SetFont(FontInfo);

        UCanvasPanelSlot* CanvasSlot = RootCanvas->AddChildToCanvas(NoticeTextBlock);
        if (CanvasSlot)
        {
            CanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f));
            CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
            CanvasSlot->SetPosition(FVector2D(0.f, -100.f));
            CanvasSlot->SetSize(FVector2D(600.f, 100.f));
        }
    }
}

void UBaseballNoticeWidget::SetNoticeText(const FString& Message)
{
    if (NoticeTextBlock)
    {
        NoticeTextBlock->SetText(FText::FromString(Message));
    }
}