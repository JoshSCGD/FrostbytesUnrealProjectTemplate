// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameSetting.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class BASEPROJECTTEMPLATE_API UGameSetting : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Default)
	FText Name;
	
	// Used for your visual widget lookup map.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, BlueprintPure)
	TSubclassOf<UGameSetting> GetVisualLookupClass() const;
};

