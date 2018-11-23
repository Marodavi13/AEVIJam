// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AEVIJam2018GameMode.h"
#include "AEVIJam2018PlayerController.h"
#include "AEVIJam2018Pawn.h"

AAEVIJam2018GameMode::AAEVIJam2018GameMode()
{
	// no pawn by default
	DefaultPawnClass = AAEVIJam2018Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AAEVIJam2018PlayerController::StaticClass();
}
