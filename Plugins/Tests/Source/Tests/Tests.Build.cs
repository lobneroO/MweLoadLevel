using UnrealBuildTool;

public class Tests : ModuleRules
{
    public Tests(ReadOnlyTargetRules Target) : base(Target)
    {
                PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
                PrivateDependencyModuleNames.AddRange(new string[] {
                    "Core",
                    "Engine",
                    "CoreUObject",
                    "MweLoadLevel"
                });
    }
}