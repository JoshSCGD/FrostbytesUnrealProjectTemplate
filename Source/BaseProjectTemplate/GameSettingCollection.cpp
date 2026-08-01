// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSettingCollection.h"

TSubclassOf<UGameSetting> UGameSettingCollection ::GetVisualLookupClass_Implementation() const
{
	return UGameSettingCollection::StaticClass();
}