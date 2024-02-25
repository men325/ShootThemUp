// Shoot Them Up Game, All Rights Reserved


#include "UI/STUPauseWidget.h"
#include "GameFramework/GameModeBase.h"
#include "Components/Button.h"


void USTUPauseWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    const auto InitStatus = Super::Initialize();

    if (ClearPauseButton_1)
    {
        ClearPauseButton_1->OnClicked.AddDynamic(this, &USTUPauseWidget::OnClearPause);
    }

}

void USTUPauseWidget::OnClearPause() 
{
    if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;

    GetWorld()->GetAuthGameMode()->ClearPause();

}