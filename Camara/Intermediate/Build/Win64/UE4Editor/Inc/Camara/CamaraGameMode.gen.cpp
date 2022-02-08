// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camara/CamaraGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamaraGameMode() {}
// Cross Module References
	CAMARA_API UClass* Z_Construct_UClass_ACamaraGameMode_NoRegister();
	CAMARA_API UClass* Z_Construct_UClass_ACamaraGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Camara();
// End Cross Module References
	void ACamaraGameMode::StaticRegisterNativesACamaraGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACamaraGameMode_NoRegister()
	{
		return ACamaraGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACamaraGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamaraGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Camara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamaraGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CamaraGameMode.h" },
		{ "ModuleRelativePath", "CamaraGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamaraGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamaraGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamaraGameMode_Statics::ClassParams = {
		&ACamaraGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACamaraGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamaraGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamaraGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamaraGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamaraGameMode, 3773040045);
	template<> CAMARA_API UClass* StaticClass<ACamaraGameMode>()
	{
		return ACamaraGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamaraGameMode(Z_Construct_UClass_ACamaraGameMode, &ACamaraGameMode::StaticClass, TEXT("/Script/Camara"), TEXT("ACamaraGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamaraGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
