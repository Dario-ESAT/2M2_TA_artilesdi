// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinball/Public/DeathPlace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathPlace() {}
// Cross Module References
	PINBALL_API UClass* Z_Construct_UClass_ADeathPlace_NoRegister();
	PINBALL_API UClass* Z_Construct_UClass_ADeathPlace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pinball();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADeathPlace::StaticRegisterNativesADeathPlace()
	{
	}
	UClass* Z_Construct_UClass_ADeathPlace_NoRegister()
	{
		return ADeathPlace::StaticClass();
	}
	struct Z_Construct_UClass_ADeathPlace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMComp__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMComp_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathPlace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pinball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathPlace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeathPlace.h" },
		{ "ModuleRelativePath", "Public/DeathPlace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathPlace_Statics::NewProp_SMComp__MetaData[] = {
		{ "Category", "AADeathPlace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathPlace_Statics::NewProp_SMComp_ = { "SMComp_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathPlace, SMComp_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathPlace_Statics::NewProp_SMComp__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathPlace_Statics::NewProp_SMComp__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeathPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathPlace_Statics::NewProp_SMComp_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathPlace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathPlace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathPlace_Statics::ClassParams = {
		&ADeathPlace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADeathPlace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeathPlace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeathPlace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathPlace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathPlace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathPlace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathPlace, 92031078);
	template<> PINBALL_API UClass* StaticClass<ADeathPlace>()
	{
		return ADeathPlace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathPlace(Z_Construct_UClass_ADeathPlace, &ADeathPlace::StaticClass, TEXT("/Script/Pinball"), TEXT("ADeathPlace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathPlace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
