// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSetting.h"

TSubclassOf<UGameSetting> UGameSetting::GetVisualLookupClass_Implementation() const
{
	return StaticClass();
}


void UGameSetting::InitializeSetting_Implementation()
{
}
