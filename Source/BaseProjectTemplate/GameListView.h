#pragma once

#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "GameListView.generated.h"

class STableViewBase;

UCLASS(Blueprintable)
class BASEPROJECTTEMPLATE_API UGameListView : public UListView
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="List View")
	void SetEntryWidgetClassForItem(UObject* Item, TSubclassOf<UUserWidget> WidgetClass);

protected:

	virtual UUserWidget& OnGenerateEntryWidgetInternal(
		UObject* Item,
		TSubclassOf<UUserWidget> DesiredEntryClass,
		const TSharedRef<STableViewBase>& OwnerTable
	) override;

private:

	UPROPERTY()
	TMap<TObjectPtr<UObject>, TSubclassOf<UUserWidget>> RuntimeEntryClasses;
};