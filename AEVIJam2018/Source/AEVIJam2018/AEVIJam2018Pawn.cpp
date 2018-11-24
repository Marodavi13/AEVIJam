// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AEVIJam2018Pawn.h"
#include "AEVIJam2018Block.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"


DECLARE_DELEGATE_OneParam(DelegateInput, EInputEvent)
DECLARE_DELEGATE_OneParam(DelegateInt32, int)


AAEVIJam2018Pawn::AAEVIJam2018Pawn(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void AAEVIJam2018Pawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	/*if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
		{
			if (UCameraComponent* OurCamera = PC->GetViewTarget()->FindComponentByClass<UCameraComponent>())
			{
				FVector Start = OurCamera->GetComponentLocation();
				FVector End = Start + (OurCamera->GetComponentRotation().Vector() * 8000.0f);
				TraceForBlock(Start, End, true);
			}
		}
		else
		{
			FVector Start, Dir, End;
			PC->DeprojectMousePositionToWorld(Start, Dir);
			End = Start + (Dir * 8000.0f);
			TraceForBlock(Start, End, false);
		}
	}*/
}

void AAEVIJam2018Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("OnResetVR", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::OnResetVR);
	PlayerInputComponent->BindAction("LeftClick", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::LeftClick);
	PlayerInputComponent->BindAction<DelegateInput>("RightClick", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::RightClick, EInputEvent::IE_Pressed);
	PlayerInputComponent->BindAction<DelegateInput>("RightClick", EInputEvent::IE_Released, this, &AAEVIJam2018Pawn::RightClick, EInputEvent::IE_Released);

	PlayerInputComponent->BindAction("ZoomIn", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ZoomIn);
	PlayerInputComponent->BindAction("ZoomOut", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ZoomOut);


	PlayerInputComponent->BindAction<DelegateInt32>("ActivateSkill1", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ActivateSkill, 1);
	PlayerInputComponent->BindAction<DelegateInt32>("ActivateSkill2", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ActivateSkill, 2);
	PlayerInputComponent->BindAction<DelegateInt32>("ActivateSkill3", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ActivateSkill, 3);
	PlayerInputComponent->BindAction<DelegateInt32>("ActivateSkill4", EInputEvent::IE_Pressed, this, &AAEVIJam2018Pawn::ActivateSkill, 4);


	PlayerInputComponent->BindAxis("MoveVertical", this, &AAEVIJam2018Pawn::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &AAEVIJam2018Pawn::MoveHorizontal);

}

void AAEVIJam2018Pawn::CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult)
{
	Super::CalcCamera(DeltaTime, OutResult);

	OutResult.Rotation = FRotator(-90.0f, -90.0f, 0.0f);
}

void AAEVIJam2018Pawn::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

/*void AAEVIJam2018Pawn::TriggerClick_Implementation()
{
	if (CurrentBlockFocus)
	{
		CurrentBlockFocus->HandleClicked();
	}
}*/

/*void AAEVIJam2018Pawn::TraceForBlock_Implementation(const FVector& Start, const FVector& End, bool bDrawDebugHelpers)
{
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);
	if (bDrawDebugHelpers)
	{
		DrawDebugLine(GetWorld(), Start, HitResult.Location, FColor::Red);
		DrawDebugSolidBox(GetWorld(), HitResult.Location, FVector(20.0f), FColor::Red);
	}
	if (HitResult.Actor.IsValid())
	{
		AAEVIJam2018Block* HitBlock = Cast<AAEVIJam2018Block>(HitResult.Actor.Get());
		if (CurrentBlockFocus != HitBlock)
		{
			if (CurrentBlockFocus)
			{
				CurrentBlockFocus->Highlight(false);
			}
			if (HitBlock)
			{
				HitBlock->Highlight(true);
			}
			CurrentBlockFocus = HitBlock;
		}
	}
	else if (CurrentBlockFocus)
	{
		CurrentBlockFocus->Highlight(false);
		CurrentBlockFocus = nullptr;
	}
}*/

