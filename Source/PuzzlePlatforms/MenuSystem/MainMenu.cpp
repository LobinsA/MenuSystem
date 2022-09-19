// Fill out your copyright notice in the Description page of Project Settings.

#include "MenuSystem/MainMenu.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"

bool UMainMenu::Initialize()
{
    bool Success = Super::Initialize();
    if(!Success) return false;

    if(!ensure(StartButton != nullptr)) return false;
    StartButton->OnClicked.AddDynamic(this, &UMainMenu::StartGame);

    if(!ensure(LoadButton != nullptr)) return false;
    LoadButton->OnClicked.AddDynamic(this, &UMainMenu::OpenLoadMenu);

    if(!ensure(CancelLoadMenuButton != nullptr)) return false;
    CancelLoadMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

    if(!ensure(SettingsButton != nullptr)) return false;
    SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::OpenSettingsMenu);

    if(!ensure(CancelSettingsMenuButton != nullptr)) return false;
    CancelSettingsMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

    if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    return true;

}

void UMainMenu::StartGame()
{
    if (MenuInterface != nullptr)
    {
        MenuInterface->Host();
    }
}

void UMainMenu::QuitGame()
{
    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    APlayerController* PlayerController = World->GetFirstPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    PlayerController->ConsoleCommand("quit");
}

void UMainMenu::OpenSettingsMenu()
{
    if(!ensure(MenuSwitcher != nullptr)) return;
    if(!ensure(SettingsMenu != nullptr)) return;
    MenuSwitcher->SetActiveWidget(SettingsMenu);
}

void UMainMenu::OpenLoadMenu()
{
    if(!ensure(MenuSwitcher != nullptr)) return;
    if(!ensure(LoadMenu != nullptr)) return;
    MenuSwitcher->SetActiveWidget(LoadMenu);
}

void UMainMenu::OpenMainMenu()
{
    if(!ensure(MenuSwitcher != nullptr)) return;
    if(!ensure(MainMenu != nullptr)) return;
    MenuSwitcher->SetActiveWidget(MainMenu);
}

