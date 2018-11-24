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
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void LeftClick();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void RightClick(EInputEvent ButtonAction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ActivateSkill(int NumberOfSkill);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void MoveVertical(float Value);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void MoveHorizontal(float Value);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void RotateMap(float Value);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ZoomIn();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ZoomOut();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class AAEVIJam2018Block* CurrentBlockFocus;
};
