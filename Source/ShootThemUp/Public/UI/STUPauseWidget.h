// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UI/STUBaseWidget.h"
#include "STUPauseWidget.generated.h"

class UButton;

UCLASS()
class SHOOTTHEMUP_API USTUPauseWidget : public USTUBaseWidget
{
	GENERATED_BODY()


protected:
    UPROPERTY(meta = (BindWidget))
    UButton* ClearPauseButton_1;

    virtual void NativeOnInitialized() override;

private:
    UFUNCTION()
    void OnClearPause();

};
