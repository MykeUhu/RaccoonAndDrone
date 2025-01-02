// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RaccoonDrone : ModuleRules
{
	public RaccoonDrone(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {  });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", 
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"OnlineSubsystem",
			"OnlineSubsystemEOS", 
			"OnlineSubsystemEOSPlus",
			"OnlineSubsystemUtils"
		});
	}
}
