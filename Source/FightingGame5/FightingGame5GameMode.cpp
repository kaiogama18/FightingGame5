// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightingGame5GameMode.h"
#include "FightingGame5Character.h"
#include "UObject/ConstructorHelpers.h"

AFightingGame5GameMode::AFightingGame5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
