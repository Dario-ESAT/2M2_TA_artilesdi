// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinball/FlippersController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlippersController() {}
// Cross Module References
	PINBALL_API UClass* Z_Construct_UClass_AFlippersController_NoRegister();
	PINBALL_API UClass* Z_Construct_UClass_AFlippersController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pinball();
// End Cross Module References
	void AFlippersController::StaticRegisterNativesAFlippersController()
	{
	}
	UClass* Z_Construct_UClass_AFlippersController_NoRegister()
	{
		return AFlippersController::StaticClass();
	}
	struct Z_Construct_UClass_AFlippersController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlippersController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pinball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlippersController.h" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlippersController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlippersController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlippersController_Statics::ClassParams = {
		&AFlippersController::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlippersController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlippersController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlippersController, 2074426775);
	template<> PINBALL_API UClass* StaticClass<AFlippersController>()
	{
		return AFlippersController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlippersController(Z_Construct_UClass_AFlippersController, &AFlippersController::StaticClass, TEXT("/Script/Pinball"), TEXT("AFlippersController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlippersController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
