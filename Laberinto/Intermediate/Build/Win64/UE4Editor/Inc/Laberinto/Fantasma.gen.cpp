// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laberinto/Fantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasma() {}
// Cross Module References
	LABERINTO_API UClass* Z_Construct_UClass_AFantasma_NoRegister();
	LABERINTO_API UClass* Z_Construct_UClass_AFantasma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Laberinto();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFantasma::StaticRegisterNativesAFantasma()
	{
	}
	UClass* Z_Construct_UClass_AFantasma_NoRegister()
	{
		return AFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitActor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitActor1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seconds__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_seconds_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Laberinto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fantasma.h" },
		{ "ModuleRelativePath", "Fantasma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFantasma_Statics::NewProp_LimitActor1_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Fantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFantasma_Statics::NewProp_LimitActor1 = { "LimitActor1", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFantasma, LimitActor1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFantasma_Statics::NewProp_LimitActor1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::NewProp_LimitActor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFantasma_Statics::NewProp_seconds__MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Fantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFantasma_Statics::NewProp_seconds_ = { "seconds_", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFantasma, seconds_), METADATA_PARAMS(Z_Construct_UClass_AFantasma_Statics::NewProp_seconds__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::NewProp_seconds__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFantasma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFantasma_Statics::NewProp_LimitActor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFantasma_Statics::NewProp_seconds_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFantasma_Statics::ClassParams = {
		&AFantasma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFantasma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFantasma, 2644537886);
	template<> LABERINTO_API UClass* StaticClass<AFantasma>()
	{
		return AFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFantasma(Z_Construct_UClass_AFantasma, &AFantasma::StaticClass, TEXT("/Script/Laberinto"), TEXT("AFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
