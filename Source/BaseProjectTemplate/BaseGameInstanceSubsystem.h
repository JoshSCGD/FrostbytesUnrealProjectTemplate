// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class BASEPROJECTTEMPLATE_API UBaseGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
	void OnSubsystemInitialized();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSubsystemDeinitialized();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
