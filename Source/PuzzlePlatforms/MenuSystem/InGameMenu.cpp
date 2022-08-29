// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuSystem/InGameMenu.h"

#include "Components/Button.h"

bool UInGameMenu::Initialize()
{
    bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(InGameMenuReturn != nullptr)) return false;
	InGameMenuReturn->OnClicked.AddDynamic(this, &UInGameMenu::ReturnPressed);

	if (!ensure(InGameMenuQuit != nullptr)) return false;
	InGameMenuQuit->OnClicked.AddDynamic(this, &UInGameMenu::QuitPressed);
    	
    if (!ensure(InGameMenuSave != nullptr)) return false;
	InGameMenuSave->OnClicked.AddDynamic(this, &UInGameMenu::SavePressed);

	if (!ensure(InGameMenuControls != nullptr)) return false;
	InGameMenuControls->OnClicked.AddDynamic(this, &UInGameMenu::ControlsPressed);

    UE_LOG(LogTemp, Warning, TEXT("Initialized InGameMenuButtons"));

    return true;
}

void UInGameMenu::ReturnPressed()
{
    Teardown();
}

void UInGameMenu::QuitPressed()
{
    if (MenuInterface != nullptr)
    {
        Teardown();
        MenuInterface->LoadMainMenu();
    }
}

void UInGameMenu::SavePressed()
{
    UE_LOG(LogTemp, Warning, TEXT("SavePressed"));
    //TODO: Widget Switch to SaveWidget
}

void UInGameMenu::ControlsPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("ControlsPressed"));
    //TODO: Widget Switch to Controls
}

