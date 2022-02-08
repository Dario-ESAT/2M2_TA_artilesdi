// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/ActorTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTest() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AActorTest_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AActorTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AActorTest::StaticRegisterNativesAActorTest()
	{
	}
	UClass* Z_Construct_UClass_AActorTest_NoRegister()
	{
		return AActorTest::StaticClass();
	}
	struct Z_Construct_UClass_AActorTest_Statics
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
	UObject* (*const Z_Construct_UClass_AActorTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorTest.h" },
		{ "ModuleRelativePath", "Public/ActorTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorTest_Statics::NewProp_SMComp__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorTest_Statics::NewProp_SMComp_ = { "SMComp_", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorTest, SMComp_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorTest_Statics::NewProp_SMComp__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorTest_Statics::NewProp_SMComp__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorTest_Statics::NewProp_SMComp_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorTest_Statics::ClassParams = {
		&AActorTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorTest, 1614952555);
	template<> MYPROJECT_API UClass* StaticClass<AActorTest>()
	{
		return AActorTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorTest(Z_Construct_UClass_AActorTest, &AActorTest::StaticClass, TEXT("/Script/MyProject"), TEXT("AActorTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
