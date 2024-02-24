// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson1GameMode.h"
#include "ThirdPerson1Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson1GameMode::AThirdPerson1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
