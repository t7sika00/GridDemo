// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GridDemoPlayerController.h"

AGridDemoPlayerController::AGridDemoPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
