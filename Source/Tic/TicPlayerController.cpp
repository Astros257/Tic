// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TicPlayerController.h"

ATicPlayerController::ATicPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
