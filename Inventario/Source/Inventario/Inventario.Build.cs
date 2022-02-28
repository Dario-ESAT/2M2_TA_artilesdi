// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Inventario : ModuleRules
{
	public Inventario(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
