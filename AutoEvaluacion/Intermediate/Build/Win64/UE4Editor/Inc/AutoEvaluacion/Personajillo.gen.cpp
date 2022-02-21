// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoEvaluacion/Public/Personajillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonajillo() {}
// Cross Module References
	AUTOEVALUACION_API UClass* Z_Construct_UClass_APersonajillo_NoRegister();
	AUTOEVALUACION_API UClass* Z_Construct_UClass_APersonajillo();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AutoEvaluacion();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APersonajillo::StaticRegisterNativesAPersonajillo()
	{
	}
	UClass* Z_Construct_UClass_APersonajillo_NoRegister()
	{
		return APersonajillo::StaticClass();
	}
	struct Z_Construct_UClass_APersonajillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walking_speed__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walking_speed_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APersonajillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoEvaluacion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajillo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Personajillo.h" },
		{ "ModuleRelativePath", "Public/Personajillo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajillo_Statics::NewProp_camera__MetaData[] = {
		{ "Category", "AAPersonajillo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Personajillo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APersonajillo_Statics::NewProp_camera_ = { "camera_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APersonajillo, camera_), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APersonajillo_Statics::NewProp_camera__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APersonajillo_Statics::NewProp_camera__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajillo_Statics::NewProp_walking_speed__MetaData[] = {
		{ "Category", "AAPersonajillo" },
		{ "ModuleRelativePath", "Public/Personajillo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APersonajillo_Statics::NewProp_walking_speed_ = { "walking_speed_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APersonajillo, walking_speed_), METADATA_PARAMS(Z_Construct_UClass_APersonajillo_Statics::NewProp_walking_speed__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APersonajillo_Statics::NewProp_walking_speed__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APersonajillo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersonajillo_Statics::NewProp_camera_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersonajillo_Statics::NewProp_walking_speed_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APersonajillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonajillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APersonajillo_Statics::ClassParams = {
		&APersonajillo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APersonajillo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APersonajillo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APersonajillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APersonajillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APersonajillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APersonajillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APersonajillo, 2535160953);
	template<> AUTOEVALUACION_API UClass* StaticClass<APersonajillo>()
	{
		return APersonajillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APersonajillo(Z_Construct_UClass_APersonajillo, &APersonajillo::StaticClass, TEXT("/Script/AutoEvaluacion"), TEXT("APersonajillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APersonajillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
