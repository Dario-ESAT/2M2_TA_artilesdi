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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_center_pivot__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_center_pivot_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_flipper_mesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right_flipper_mesh_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_flipper_pivot__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right_flipper_pivot_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_flipper_mesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_flipper_mesh_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_flipper_pivot__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_flipper_pivot_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_to_rotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time_to_rotate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot_ = { "center_pivot_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, center_pivot_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh_ = { "right_flipper_mesh_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, right_flipper_mesh_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot_ = { "right_flipper_pivot_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, right_flipper_pivot_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh_ = { "left_flipper_mesh_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, left_flipper_mesh_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot_ = { "left_flipper_pivot_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, left_flipper_pivot_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate_MetaData[] = {
		{ "Category", "Flippers" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate = { "time_to_rotate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, time_to_rotate), METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlippersController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlippersController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlippersController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlippersController_Statics::ClassParams = {
		&AFlippersController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlippersController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFlippersController, 1519365775);
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
