// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoEvaluacion/AutoEvaluacionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoEvaluacionGameModeBase() {}
// Cross Module References
	AUTOEVALUACION_API UClass* Z_Construct_UClass_AAutoEvaluacionGameModeBase_NoRegister();
	AUTOEVALUACION_API UClass* Z_Construct_UClass_AAutoEvaluacionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AutoEvaluacion();
// End Cross Module References
	void AAutoEvaluacionGameModeBase::StaticRegisterNativesAAutoEvaluacionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAutoEvaluacionGameModeBase_NoRegister()
	{
		return AAutoEvaluacionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoEvaluacion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AutoEvaluacionGameModeBase.h" },
		{ "ModuleRelativePath", "AutoEvaluacionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoEvaluacionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::ClassParams = {
		&AAutoEvaluacionGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoEvaluacionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutoEvaluacionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutoEvaluacionGameModeBase, 3271946033);
	template<> AUTOEVALUACION_API UClass* StaticClass<AAutoEvaluacionGameModeBase>()
	{
		return AAutoEvaluacionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutoEvaluacionGameModeBase(Z_Construct_UClass_AAutoEvaluacionGameModeBase, &AAutoEvaluacionGameModeBase::StaticClass, TEXT("/Script/AutoEvaluacion"), TEXT("AAutoEvaluacionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoEvaluacionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
