// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laberinto/LaberintoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoGameMode() {}
// Cross Module References
	LABERINTO_API UClass* Z_Construct_UClass_ALaberintoGameMode_NoRegister();
	LABERINTO_API UClass* Z_Construct_UClass_ALaberintoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Laberinto();
// End Cross Module References
	void ALaberintoGameMode::StaticRegisterNativesALaberintoGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALaberintoGameMode_NoRegister()
	{
		return ALaberintoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALaberintoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaberintoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Laberinto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaberintoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LaberintoGameMode.h" },
		{ "ModuleRelativePath", "LaberintoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaberintoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoGameMode_Statics::ClassParams = {
		&ALaberintoGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALaberintoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaberintoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaberintoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaberintoGameMode, 2667811569);
	template<> LABERINTO_API UClass* StaticClass<ALaberintoGameMode>()
	{
		return ALaberintoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaberintoGameMode(Z_Construct_UClass_ALaberintoGameMode, &ALaberintoGameMode::StaticClass, TEXT("/Script/Laberinto"), TEXT("ALaberintoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
