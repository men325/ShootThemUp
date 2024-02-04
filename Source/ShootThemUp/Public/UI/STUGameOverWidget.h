// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUCoreTypes.h"
#include "Components/VerticalBox.h"
#include "STUGameOverWidget.generated.h"

class VerticalBox;
class UButton;


UCLASS()
class SHOOTTHEMUP_API USTUGameOverWidget : public UUserWidget
{
	GENERATED_BODY()



protected:
    UPROPERTY(meta = (BindWidget))
    UVerticalBox* PlayerStatBox;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> PlayerStatRowWidgetClass;
  
    UPROPERTY(meta = (BindWidget))
    UButton* ResetLeveLButton;

    virtual void NativeOnInitialized() override;

 private:
    void OnMatchStateChanged(ESTUMatchState State);
    void UpdatePlayersStat();

    UFUNCTION()
    void OnResetLevel();

};
