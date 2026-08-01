#pragma once
#include "GameSetting.h"
#include  "GameSettingValue.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable)
class BASEPROJECTTEMPLATE_API UGameSettingValue : public UGameSetting
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Default)
	FText Description;
};
