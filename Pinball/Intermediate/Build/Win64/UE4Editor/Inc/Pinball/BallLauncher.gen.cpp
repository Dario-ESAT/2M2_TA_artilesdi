// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinball/Public/BallLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallLauncher() {}
// Cross Module References
	PINBALL_API UClass* Z_Construct_UClass_ABallLauncher_NoRegister();
	PINBALL_API UClass* Z_Construct_UClass_ABallLauncher();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pinball();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABallLauncher::StaticRegisterNativesABallLauncher()
	{
	}
	UClass* Z_Construct_UClass_ABallLauncher_NoRegister()
	{
		return ABallLauncher::StaticClass();
	}
	struct Z_Construct_UClass_ABallLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_flipper__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right_flipper_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_flipper__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_flipper_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_to_rotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time_to_rotate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pinball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallLauncher_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BallLauncher.h" },
		{ "ModuleRelativePath", "Public/BallLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallLauncher_Statics::NewProp_right_flipper__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BallLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallLauncher_Statics::NewProp_right_flipper_ = { "right_flipper_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallLauncher, right_flipper_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallLauncher_Statics::NewProp_right_flipper__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallLauncher_Statics::NewProp_right_flipper__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallLauncher_Statics::NewProp_left_flipper__MetaData[] = {
		{ "Category", "Flippers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BallLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallLauncher_Statics::NewProp_left_flipper_ = { "left_flipper_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallLauncher, left_flipper_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallLauncher_Statics::NewProp_left_flipper__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallLauncher_Statics::NewProp_left_flipper__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallLauncher_Statics::NewProp_time_to_rotate_MetaData[] = {
		{ "Category", "Flippers" },
		{ "ModuleRelativePath", "Public/BallLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABallLauncher_Statics::NewProp_time_to_rotate = { "time_to_rotate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallLauncher, time_to_rotate), METADATA_PARAMS(Z_Construct_UClass_ABallLauncher_Statics::NewProp_time_to_rotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallLauncher_Statics::NewProp_time_to_rotate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallLauncher_Statics::NewProp_right_flipper_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallLauncher_Statics::NewProp_left_flipper_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallLauncher_Statics::NewProp_time_to_rotate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallLauncher_Statics::ClassParams = {
		&ABallLauncher::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABallLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABallLauncher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABallLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABallLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallLauncher, 3885167973);
	template<> PINBALL_API UClass* StaticClass<ABallLauncher>()
	{
		return ABallLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallLauncher(Z_Construct_UClass_ABallLauncher, &ABallLauncher::StaticClass, TEXT("/Script/Pinball"), TEXT("ABallLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
