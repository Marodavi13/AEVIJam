// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AEVIJam2018Pawn.generated.h"

UCLASS(config=Game)
class AAEVIJam2018Pawn : public APawn
{
	GENERATED_UCLASS_BODY()

public:

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

protected:
	void OnResetVR();
	UFUNCTION(BlueprintImplementableEvent)
		void LeftClick();
	UFUNCTION(BlueprintImplementableEvent)
		void RightClick(EInputEvent ButtonAction);

	UFUNCTION(BlueprintImplementableEvent)
		void ActivateSkill(int NumberOfSkill);

	UFUNCTION(BlueprintImplementableEvent)
		void MoveVertical(float Value);
	UFUNCTION(BlueprintImplementableEvent)
		void MoveHorizontal(float Value);

	UFUNCTION(BlueprintImplementableEvent)
		void RotateHorizontal(float Value);
	UFUNCTION(BlueprintImplementableEvent)
		void RotateVertical(float Value);

	UFUNCTION(BlueprintImplementableEvent)
		void ZoomIn();
	UFUNCTION(BlueprintImplementableEvent)
		void ZoomOut();

	UFUNCTION(BlueprintImplementableEvent)
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class AAEVIJam2018Block* CurrentBlockFocus;
};
