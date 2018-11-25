// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_MoveAEVI.h"
#include "AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"


UBTTask_MoveAEVI::UBTTask_MoveAEVI()
{
	NodeName = "BBT_MoveToAEVI";
}

EBTNodeResult::Type UBTTask_MoveAEVI::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	//Casteo a ver si es un actor
	AActor* LocationActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetToFollow.SelectedKeyName));
	//Si lo es me muevo
	if (LocationActor->IsValidLowLevel())
	{
		OwnerComp.GetAIOwner()->MoveToActor(LocationActor, 5.f);
		return EBTNodeResult::Succeeded;

	}
	else
	{
		//Si no compruebo si es un vector
		FVector Location = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TargetToFollow.SelectedKeyName);
		//Si el vector contiene NaN no es valido
		if (!Location.ContainsNaN())
		{
			OwnerComp.GetAIOwner()->MoveToLocation(Location, 5.f);
			return EBTNodeResult::Succeeded;
		}
	}
	//Si he metido algo que no sea un vector o una actor falla
	return EBTNodeResult::Failed;
}


//	OwnerComp.GetAIOwner()->Move


