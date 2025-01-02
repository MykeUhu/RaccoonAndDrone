// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaccoonDroneGameMode.h"
#include "RaccoonDroneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARaccoonDroneGameMode::ARaccoonDroneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
