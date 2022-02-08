// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasoplonDeFede/Public/RobaInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobaInput() {}
// Cross Module References
	CASOPLONDEFEDE_API UClass* Z_Construct_UClass_ARobaInput_NoRegister();
	CASOPLONDEFEDE_API UClass* Z_Construct_UClass_ARobaInput();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CasoplonDeFede();
// End Cross Module References
	DEFINE_FUNCTION(ARobaInput::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_falue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_falue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARobaInput::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_falue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_falue);
		P_NATIVE_END;
	}
	void ARobaInput::StaticRegisterNativesARobaInput()
	{
		UClass* Class = ARobaInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &ARobaInput::execMoveForward },
			{ "MoveRight", &ARobaInput::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobaInput_MoveForward_Statics
	{
		struct RobaInput_eventMoveForward_Parms
		{
			float falue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_falue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobaInput_MoveForward_Statics::NewProp_falue = { "falue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobaInput_eventMoveForward_Parms, falue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobaInput_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobaInput_MoveForward_Statics::NewProp_falue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobaInput_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RobaInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobaInput_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobaInput, nullptr, "MoveForward", nullptr, nullptr, sizeof(RobaInput_eventMoveForward_Parms), Z_Construct_UFunction_ARobaInput_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobaInput_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobaInput_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobaInput_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobaInput_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobaInput_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobaInput_MoveRight_Statics
	{
		struct RobaInput_eventMoveRight_Parms
		{
			float falue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_falue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobaInput_MoveRight_Statics::NewProp_falue = { "falue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobaInput_eventMoveRight_Parms, falue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobaInput_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobaInput_MoveRight_Statics::NewProp_falue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobaInput_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RobaInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobaInput_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobaInput, nullptr, "MoveRight", nullptr, nullptr, sizeof(RobaInput_eventMoveRight_Parms), Z_Construct_UFunction_ARobaInput_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobaInput_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobaInput_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobaInput_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobaInput_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobaInput_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobaInput_NoRegister()
	{
		return ARobaInput::StaticClass();
	}
	struct Z_Construct_UClass_ARobaInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobaInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CasoplonDeFede,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobaInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobaInput_MoveForward, "MoveForward" }, // 943534013
		{ &Z_Construct_UFunction_ARobaInput_MoveRight, "MoveRight" }, // 667966817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobaInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RobaInput.h" },
		{ "ModuleRelativePath", "Public/RobaInput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobaInput_Statics::NewProp_speed__MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/RobaInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobaInput_Statics::NewProp_speed_ = { "speed_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobaInput, speed_), METADATA_PARAMS(Z_Construct_UClass_ARobaInput_Statics::NewProp_speed__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARobaInput_Statics::NewProp_speed__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobaInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobaInput_Statics::NewProp_speed_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobaInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobaInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobaInput_Statics::ClassParams = {
		&ARobaInput::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobaInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARobaInput_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARobaInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARobaInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobaInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobaInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobaInput, 1243488617);
	template<> CASOPLONDEFEDE_API UClass* StaticClass<ARobaInput>()
	{
		return ARobaInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobaInput(Z_Construct_UClass_ARobaInput, &ARobaInput::StaticClass, TEXT("/Script/CasoplonDeFede"), TEXT("ARobaInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobaInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
