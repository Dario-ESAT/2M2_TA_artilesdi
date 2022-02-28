// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventario/InventarioHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventarioHUD() {}
// Cross Module References
	INVENTARIO_API UClass* Z_Construct_UClass_AInventarioHUD_NoRegister();
	INVENTARIO_API UClass* Z_Construct_UClass_AInventarioHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Inventario();
// End Cross Module References
	void AInventarioHUD::StaticRegisterNativesAInventarioHUD()
	{
	}
	UClass* Z_Construct_UClass_AInventarioHUD_NoRegister()
	{
		return AInventarioHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInventarioHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventarioHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventarioHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InventarioHUD.h" },
		{ "ModuleRelativePath", "InventarioHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventarioHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventarioHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventarioHUD_Statics::ClassParams = {
		&AInventarioHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInventarioHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventarioHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventarioHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventarioHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventarioHUD, 304204010);
	template<> INVENTARIO_API UClass* StaticClass<AInventarioHUD>()
	{
		return AInventarioHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventarioHUD(Z_Construct_UClass_AInventarioHUD, &AInventarioHUD::StaticClass, TEXT("/Script/Inventario"), TEXT("AInventarioHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventarioHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
