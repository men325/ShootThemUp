// Shoot Them Up Game, All Rights Reserved

#include "STUGameDataWidget.h"
#include "STUGameModeBase.h"
#include "Player/STUPlayerState.h"


int32 USTUGameDataWidget::GetKillsNum() const 
{
    const auto PlayerState = GetSTUPlayerState();
    return PlayerState ? PlayerState->GetKillsNum() : 0; 
}

int32 USTUGameDataWidget::GetCurrentRoundNum() const 
{
    const auto Gamemode = GetSTUGameMode();
    return Gamemode ? Gamemode->GetCurrentRoundNum() : 0;
}

int32 USTUGameDataWidget::GetTotalRoundsNum() const 
{
    const auto Gamemode = GetSTUGameMode();
    return Gamemode ? Gamemode->GetGameData().RoundsNum : 0;
}

int32 USTUGameDataWidget::GetRoundSecondsRemaining() const
{
    const auto Gamemode = GetSTUGameMode();
    return Gamemode ? Gamemode->GetRoundSecondsRemaining() : 0;
}

ASTUGameModeBase* USTUGameDataWidget::GetSTUGameMode() const 
{
    return GetWorld() ? Cast<ASTUGameModeBase>(GetWorld()->GetAuthGameMode()) : nullptr;
}

ASTUPlayerState* USTUGameDataWidget::GetSTUPlayerState() const 
{
    return GetOwningPlayer() ? Cast<ASTUPlayerState>(GetOwningPlayer()->PlayerState) : nullptr;
}