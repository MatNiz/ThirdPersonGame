// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FindPlayerTask.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class BALLTHROW_API UFindPlayerTask : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UFindPlayerTask(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory);

private:
	UPROPERTY(EditInstanceOnly, Category = "Properties")
		float OffsetDistance = 150.0f;
};
