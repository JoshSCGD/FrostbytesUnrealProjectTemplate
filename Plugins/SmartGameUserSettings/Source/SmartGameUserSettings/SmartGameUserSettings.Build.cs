using UnrealBuildTool;

public class SmartGameUserSettings : ModuleRules
{
	public SmartGameUserSettings(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"UMG",
			"Slate",
			"SlateCore",
			"CommonUI"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
		});
	}
}