// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class val2test : ModuleRules
{
	public val2test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
