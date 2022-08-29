// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuReturn;

	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuQuit;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuSave;	
	
	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuControls;

	UFUNCTION()
	void ReturnPressed();

	UFUNCTION()
	void QuitPressed();

	UFUNCTION()
	void SavePressed();

	UFUNCTION()
	void ControlsPressed();
};