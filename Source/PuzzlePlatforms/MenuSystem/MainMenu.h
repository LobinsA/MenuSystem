// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize();
	
private:
	UPROPERTY(meta = (BindWidget))
	class UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
	class UButton* StartButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* LoadButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelLoadMenuButton;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* ConfirmLoadMenuButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* OptionsButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelOptionsMenuButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	class UWidget* MainMenu;

	UPROPERTY(meta = (BindWidget))
	class UWidget* OptionsMenu;
	
	UPROPERTY(meta = (BindWidget))
	class UWidget* LoadMenu;

	// OptionsMenu Settings Buttons
	UPROPERTY(meta = (BindWidget))
	class UButton* FullScreen;

	UPROPERTY(meta = (BindWidget))
	class UButton* Windowed;

	UPROPERTY(meta = (BindWidget))
	class UButton* _720x480;

	UPROPERTY(meta = (BindWidget))
	class UButton* _1280x720;

	UPROPERTY(meta = (BindWidget))
	class UButton* _1920x1080;

	UPROPERTY(meta = (BindWidget))
	class UButton* _2560x1440;

	UPROPERTY(meta = (BindWidget))
	class UButton* FPS30;

	UPROPERTY(meta = (BindWidget))
	class UButton* FPS60;

	UPROPERTY(meta = (BindWidget))
	class UButton* FPS120;

	UPROPERTY(meta = (BindWidget))
	class UButton* FPSUnlimited;

	UPROPERTY(meta = (BindWidget))
	class UButton* ViewNear;

	UPROPERTY(meta = (BindWidget))
	class UButton* ViewMedium;

	UPROPERTY(meta = (BindWidget))
	class UButton* ViewFar;

	UPROPERTY(meta = (BindWidget))
	class UButton* ViewEpic;

	UPROPERTY(meta = (BindWidget))
	class UButton* PostLow;

	UPROPERTY(meta = (BindWidget))
	class UButton* PostMedium;

	UPROPERTY(meta = (BindWidget))
	class UButton* PostHigh;

	UPROPERTY(meta = (BindWidget))
	class UButton* PostEpic;

	UPROPERTY(meta = (BindWidget))
	class UButton* AliasLow;

	UPROPERTY(meta = (BindWidget))
	class UButton* AliasMedium;

	UPROPERTY(meta = (BindWidget))
	class UButton* AliasHigh;

	UPROPERTY(meta = (BindWidget))
	class UButton* AliasEpic;

	UPROPERTY(meta = (BindWidget))
	class UButton* TextureLow;

	UPROPERTY(meta = (BindWidget))
	class UButton* TextureMedium;

	UPROPERTY(meta = (BindWidget))
	class UButton* TextureHigh;

	UPROPERTY(meta = (BindWidget))
	class UButton* TextureEpic;

	UPROPERTY(meta = (BindWidget))
	class UButton* ShadowLow;

	UPROPERTY(meta = (BindWidget))
	class UButton* ShadowMedium;

	UPROPERTY(meta = (BindWidget))
	class UButton* ShadowHigh;

	UPROPERTY(meta = (BindWidget))
	class UButton* ShadowEpic;

	UFUNCTION()
	void StartGame();

	UFUNCTION()
	void QuitGame();

	UFUNCTION()
	void OpenOptionsMenu();

	UFUNCTION()
	void OpenLoadMenu();

	UFUNCTION()
	void OpenMainMenu();

};
