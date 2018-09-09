
namespace UnrealBuildTool.Rules
{
	public class CookedLog : ModuleRules
	{
		public CookedLog(TargetInfo Target)
        {
            PrivateIncludePaths.Add("CookedLog/Private");

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
                    "Engine",
                    //"UnrealTournament",
				}
			);
		}
	}
}