// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UI/STUBaseWidget.h"
#include "STUCoreTypes.h"
#include "Components/VerticalBox.h"
#include "STUGameOverWidget.generated.h"

class VerticalBox;
class UButton;


UCLASS()
class SHOOTTHEMUP_API USTUGameOverWidget : public USTUBaseWidget
{
	GENERATED_BODY()



protected:
    UPROPERTY(meta = (BindWidget))
    UVerticalBox* PlayerStatBox;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> PlayerStatRowWidgetClass;
  
    UPROPERTY(meta = (BindWidget))
    UButton* ResetLevelButton_1;

    virtual void NativeOnInitialized() override;

 private:
    void OnMatchStateChanged(ESTUMatchState State);
    void UpdatePlayersStat();

    UFUNCTION()
    void OnResetLevel();

};
