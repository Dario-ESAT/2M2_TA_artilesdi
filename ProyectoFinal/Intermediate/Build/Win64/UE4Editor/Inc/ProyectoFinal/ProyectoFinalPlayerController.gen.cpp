// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoFinal/ProyectoFinalPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoFinalPlayerController() {}
// Cross Module References
	PROYECTOFINAL_API UClass* Z_Construct_UClass_AProyectoFinalPlayerController_NoRegister();
	PROYECTOFINAL_API UClass* Z_Construct_UClass_AProyectoFinalPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProyectoFinal();
// End Cross Module References
	void AProyectoFinalPlayerController::StaticRegisterNativesAProyectoFinalPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProyectoFinalPlayerController_NoRegister()
	{
		return AProyectoFinalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoFinalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoFinalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFinalPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProyectoFinalPlayerController.h" },
		{ "ModuleRelativePath", "ProyectoFinalPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoFinalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoFinalPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectoFinalPlayerController_Statics::ClassParams = {
		&AProyectoFinalPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectoFinalPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFinalPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoFinalPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectoFinalPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectoFinalPlayerController, 651216380);
	template<> PROYECTOFINAL_API UClass* StaticClass<AProyectoFinalPlayerController>()
	{
		return AProyectoFinalPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectoFinalPlayerController(Z_Construct_UClass_AProyectoFinalPlayerController, &AProyectoFinalPlayerController::StaticClass, TEXT("/Script/ProyectoFinal"), TEXT("AProyectoFinalPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoFinalPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
