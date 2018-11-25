// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MoveAEVI.generated.h"



/**
 *
 */
UCLASS()
class AEVIJAM2018_API UBTTask_MoveAEVI : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_MoveAEVI();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Anything To Follow")
		FBlackboardKeySelector TargetToFollow;
};