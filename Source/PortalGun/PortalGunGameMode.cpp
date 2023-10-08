// Copyright Epic Games, Inc. All Rights Reserved.

#include "PortalGunGameMode.h"
#include "PortalGunCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortalGunGameMode::APortalGunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}