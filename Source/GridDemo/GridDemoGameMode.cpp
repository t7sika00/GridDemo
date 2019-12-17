// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GridDemoGameMode.h"
#include "GridDemoPlayerController.h"
#include "GridDemoPawn.h"

AGridDemoGameMode::AGridDemoGameMode()
{
	// no pawn by default
	DefaultPawnClass = AGridDemoPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AGridDemoPlayerController::StaticClass();
}
