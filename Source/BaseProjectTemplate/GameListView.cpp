#include "GameListView.h"

#include "Blueprint/UserWidget.h"
#include "Widgets/Views/STableViewBase.h"


void UGameListView::SetEntryWidgetClassForItem(
	UObject* Item,
	TSubclassOf<UUserWidget> WidgetClass)
{
	if (!Item || !WidgetClass)
	{
		return;
	}

	RuntimeEntryClasses.Add(Item, WidgetClass);
}


UUserWidget& UGameListView::OnGenerateEntryWidgetInternal(
	UObject* Item,
	TSubclassOf<UUserWidget> DesiredEntryClass,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	if (TSubclassOf<UUserWidget>* FoundClass = RuntimeEntryClasses.Find(Item))
	{
		return Super::OnGenerateEntryWidgetInternal(Item, *FoundClass, OwnerTable);
	}

	return Super::OnGenerateEntryWidgetInternal(Item, DesiredEntryClass, OwnerTable);
}