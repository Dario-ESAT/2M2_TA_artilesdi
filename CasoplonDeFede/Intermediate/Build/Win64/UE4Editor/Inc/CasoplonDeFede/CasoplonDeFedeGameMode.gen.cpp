// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasoplonDeFede/CasoplonDeFedeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasoplonDeFedeGameMode() {}
// Cross Module References
	CASOPLONDEFEDE_API UClass* Z_Construct_UClass_ACasoplonDeFedeGameMode_NoRegister();
	CASOPLONDEFEDE_API UClass* Z_Construct_UClass_ACasoplonDeFedeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CasoplonDeFede();
// End Cross Module References
	void ACasoplonDeFedeGameMode::StaticRegisterNativesACasoplonDeFedeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACasoplonDeFedeGameMode_NoRegister()
	{
		return ACasoplonDeFedeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CasoplonDeFede,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CasoplonDeFedeGameMode.h" },
		{ "ModuleRelativePath", "CasoplonDeFedeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasoplonDeFedeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::ClassParams = {
		&ACasoplonDeFedeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACasoplonDeFedeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACasoplonDeFedeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACasoplonDeFedeGameMode, 610247639);
	template<> CASOPLONDEFEDE_API UClass* StaticClass<ACasoplonDeFedeGameMode>()
	{
		return ACasoplonDeFedeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACasoplonDeFedeGameMode(Z_Construct_UClass_ACasoplonDeFedeGameMode, &ACasoplonDeFedeGameMode::StaticClass, TEXT("/Script/CasoplonDeFede"), TEXT("ACasoplonDeFedeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACasoplonDeFedeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
