#include "BaseGameInstanceSubsystem.h"

void UBaseGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSubsystemInitialized();
}

void UBaseGameInstanceSubsystem::Deinitialize()
{
	OnSubsystemDeinitialized();

	Super::Deinitialize();
}