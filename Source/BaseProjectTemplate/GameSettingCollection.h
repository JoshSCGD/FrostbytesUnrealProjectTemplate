#pragma once
#include "GameSettingValue.h"
#include "CoreMinimal.h"
#include "GameSetting.h"
#include "GameSettingCollection.generated.h"

UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class BASEPROJECTTEMPLATE_API UGameSettingCollection : public UGameSetting
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default", meta=(DisplayAfter="Name"))
	TArray<TSubclassOf<UGameSettingValue>> Options;
	
	
	TSubclassOf<UGameSetting> GetVisualLookupClass_Implementation() const;
};