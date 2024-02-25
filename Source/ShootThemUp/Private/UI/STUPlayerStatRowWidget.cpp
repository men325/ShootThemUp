// Shoot Them Up Game, All Rights Reserved


#include "UI/STUPlayerStatRowWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"



void USTUPlayerStatRowWidget::SetPlayerName(const FText& Text) 
{
    if (!PlayerNameTextBlock_1) return;
    PlayerNameTextBlock_1->SetText(Text);
}

void USTUPlayerStatRowWidget::SetKills(const FText& Text) 
{
    if (!KillsTextBlock_1) return;
    KillsTextBlock_1->SetText(Text);
}

void USTUPlayerStatRowWidget::SetDeaths(const FText& Text) 
{
    if (!DeathsTextBlock_1) return;
    DeathsTextBlock_1->SetText(Text);

}

void USTUPlayerStatRowWidget::SetTeam(const FText& Text) 
{
    if (!TeamTextBlock_1) return;
    TeamTextBlock_1->SetText(Text);
}

void USTUPlayerStatRowWidget::SetPlayerIndicatorVisibility(bool Visible) 
{
    if (!PlayerIndicatorImage_1) return;
    PlayerIndicatorImage_1->SetVisibility(Visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void USTUPlayerStatRowWidget::SetTeamColor(const FLinearColor& Color) 
{
    if (!TeamImage_1) return;

}