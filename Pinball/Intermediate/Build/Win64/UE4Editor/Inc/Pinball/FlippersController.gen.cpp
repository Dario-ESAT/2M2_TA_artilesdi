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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlippersController::execEndKickLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndKickLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippersController::execEndKickRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndKickRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippersController::execKickRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KickRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlippersController::execKickLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KickLeft();
		P_NATIVE_END;
	}
	void AFlippersController::StaticRegisterNativesAFlippersController()
	{
		UClass* Class = AFlippersController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndKickLeft", &AFlippersController::execEndKickLeft },
			{ "EndKickRight", &AFlippersController::execEndKickRight },
			{ "KickLeft", &AFlippersController::execKickLeft },
			{ "KickRight", &AFlippersController::execKickRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippersController, nullptr, "EndKickLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippersController_EndKickLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlippersController_EndKickLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippersController_EndKickRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippersController_EndKickRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippersController_EndKickRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippersController, nullptr, "EndKickRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippersController_EndKickRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippersController_EndKickRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippersController_EndKickRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlippersController_EndKickRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippersController_KickLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippersController_KickLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippersController_KickLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippersController, nullptr, "KickLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippersController_KickLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippersController_KickLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippersController_KickLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlippersController_KickLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlippersController_KickRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlippersController_KickRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlippersController_KickRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlippersController, nullptr, "KickRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlippersController_KickRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlippersController_KickRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlippersController_KickRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlippersController_KickRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlippersController_NoRegister()
	{
		return AFlippersController::StaticClass();
	}
	struct Z_Construct_UClass_AFlippersController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_flipper_mesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_flipper_mesh_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_flipper_pivot__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_flipper_pivot_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_to_rotate__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time_to_rotate_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlippersController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pinball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlippersController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlippersController_EndKickLeft, "EndKickLeft" }, // 1880752218
		{ &Z_Construct_UFunction_AFlippersController_EndKickRight, "EndKickRight" }, // 968972804
		{ &Z_Construct_UFunction_AFlippersController_KickLeft, "KickLeft" }, // 835506673
		{ &Z_Construct_UFunction_AFlippersController_KickRight, "KickRight" }, // 941742150
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_camera__MetaData[] = {
		{ "Category", "Flippers" },
		{ "Comment", "//ACameraActor* camera_;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlippersController.h" },
		{ "ToolTip", "ACameraActor* camera_;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_camera_ = { "camera_", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, camera_), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_camera__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_camera__MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate__MetaData[] = {
		{ "Category", "Flippers" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate_ = { "time_to_rotate_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, time_to_rotate_), METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlippersController_Statics::NewProp_rotation__MetaData[] = {
		{ "Category", "Flippers" },
		{ "ModuleRelativePath", "FlippersController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlippersController_Statics::NewProp_rotation_ = { "rotation_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlippersController, rotation_), METADATA_PARAMS(Z_Construct_UClass_AFlippersController_Statics::NewProp_rotation__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlippersController_Statics::NewProp_rotation__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlippersController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_center_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_right_flipper_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_camera_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_left_flipper_pivot_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_time_to_rotate_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlippersController_Statics::NewProp_rotation_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlippersController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlippersController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlippersController_Statics::ClassParams = {
		&AFlippersController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlippersController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AFlippersController, 1596090029);
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
