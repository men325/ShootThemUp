// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUPlayerStatRowWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS()
class SHOOTTHEMUP_API USTUPlayerStatRowWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
      void SetPlayerName(const FText& Text);
      void SetKills(const FText& Text);
      void SetDeaths(const FText& Text);
      void SetTeam(const FText& Text);
      void SetPlayerIndicatorVisibility(bool Visible);
      void SetTeamColor(const FLinearColor& Color);

  protected:
      UPROPERTY(meta = (BindWidget))
      UTextBlock* PlayerNameTextBlock_1;

      UPROPERTY(meta = (BindWidget))
      UTextBlock* KillsTextBlock_1;

      UPROPERTY(meta = (BindWidget))
      UTextBlock* DeathsTextBlock_1;

      UPROPERTY(meta = (BindWidget))
      UTextBlock* TeamTextBlock_1;

      UPROPERTY(meta = (BindWidget))
      UImage* PlayerIndicatorImage_1;

      UPROPERTY(meta = (BindWidget))
      UImage* TeamImage_1;

};
