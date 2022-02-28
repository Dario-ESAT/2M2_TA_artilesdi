// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventario/InventarioGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventarioGameMode() {}
// Cross Module References
	INVENTARIO_API UClass* Z_Construct_UClass_AInventarioGameMode_NoRegister();
	INVENTARIO_API UClass* Z_Construct_UClass_AInventarioGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Inventario();
// End Cross Module References
	void AInventarioGameMode::StaticRegisterNativesAInventarioGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInventarioGameMode_NoRegister()
	{
		return AInventarioGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInventarioGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventarioGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventarioGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InventarioGameMode.h" },
		{ "ModuleRelativePath", "InventarioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventarioGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventarioGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventarioGameMode_Statics::ClassParams = {
		&AInventarioGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInventarioGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventarioGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventarioGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventarioGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventarioGameMode, 2394264059);
	template<> INVENTARIO_API UClass* StaticClass<AInventarioGameMode>()
	{
		return AInventarioGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventarioGameMode(Z_Construct_UClass_AInventarioGameMode, &AInventarioGameMode::StaticClass, TEXT("/Script/Inventario"), TEXT("AInventarioGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventarioGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
