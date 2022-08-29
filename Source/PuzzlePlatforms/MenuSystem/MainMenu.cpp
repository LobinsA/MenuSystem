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

    if(!ensure(OptionsButton != nullptr)) return false;
    OptionsButton->OnClicked.AddDynamic(this, &UMainMenu::OpenOptionsMenu);

    if(!ensure(CancelOptionsMenuButton != nullptr)) return false;
    CancelOptionsMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

    if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(FullScreen != nullptr)) return false;
	FullScreen->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(Windowed != nullptr)) return false;
	Windowed->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(_720x480 != nullptr)) return false;
	_720x480->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(_1280x720 != nullptr)) return false;
	_1280x720->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(_1920x1080 != nullptr)) return false;
	_1920x1080->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(_2560x1440 != nullptr)) return false;
	_2560x1440->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(FPS30 != nullptr)) return false;
	FPS30->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(FPS60 != nullptr)) return false;
	FPS60->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(FPS120 != nullptr)) return false;
	FPS120->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(FPSUnlimited != nullptr)) return false;
	FPSUnlimited->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ViewNear != nullptr)) return false;
	ViewNear->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ViewMedium != nullptr)) return false;
	ViewMedium->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ViewFar != nullptr)) return false;
	ViewFar->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ViewEpic != nullptr)) return false;
	ViewEpic->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(PostLow != nullptr)) return false;
	PostLow->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(PostMedium != nullptr)) return false;
	PostMedium->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(PostHigh != nullptr)) return false;
	PostHigh->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(PostEpic != nullptr)) return false;
	PostEpic->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(AliasLow != nullptr)) return false;
	AliasLow->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(AliasMedium != nullptr)) return false;
	AliasMedium->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(AliasHigh != nullptr)) return false;
	AliasHigh->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(AliasEpic != nullptr)) return false;
	AliasEpic->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(TextureLow != nullptr)) return false;
	TextureLow->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(TextureMedium != nullptr)) return false;
	TextureMedium->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(TextureHigh != nullptr)) return false;
	TextureHigh->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(TextureEpic != nullptr)) return false;
	TextureEpic->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ShadowLow != nullptr)) return false;
	ShadowLow->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ShadowMedium != nullptr)) return false;
	ShadowMedium->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ShadowHigh != nullptr)) return false;
	ShadowHigh->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

    if (!ensure(ShadowEpic != nullptr)) return false;
	ShadowEpic->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

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

void UMainMenu::OpenOptionsMenu()
{
    if(!ensure(MenuSwitcher != nullptr)) return;
    if(!ensure(OptionsMenu != nullptr)) return;
    MenuSwitcher->SetActiveWidget(OptionsMenu);
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

