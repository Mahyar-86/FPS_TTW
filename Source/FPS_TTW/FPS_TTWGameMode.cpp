// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_TTWGameMode.h"
#include "FPS_TTWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_TTWGameMode::AFPS_TTWGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
