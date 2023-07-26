// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_TTW : ModuleRules
{
	public FPS_TTW(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
