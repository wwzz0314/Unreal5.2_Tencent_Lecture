// Copyright Epic Games, Inc. All Rights Reserved.

#include "week1GameMode.h"
#include "week1Character.h"
#include "UObject/ConstructorHelpers.h"

Aweek1GameMode::Aweek1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
