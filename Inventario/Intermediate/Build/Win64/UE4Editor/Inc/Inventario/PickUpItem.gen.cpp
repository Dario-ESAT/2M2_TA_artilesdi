// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventario/Public/PickUpItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpItem() {}
// Cross Module References
	INVENTARIO_API UClass* Z_Construct_UClass_UPickUpItem_NoRegister();
	INVENTARIO_API UClass* Z_Construct_UClass_UPickUpItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Inventario();
// End Cross Module References
	DEFINE_FUNCTION(IPickUpItem::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PickUp_Implementation();
		P_NATIVE_END;
	}
	bool IPickUpItem::PickUp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickUp instead.");
		PickUpItem_eventPickUp_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPickUpItem::StaticRegisterNativesUPickUpItem()
	{
		UClass* Class = UPickUpItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickUp", &IPickUpItem::execPickUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickUpItem_PickUp_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPickUpItem_PickUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PickUpItem_eventPickUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPickUpItem_PickUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUpItem_eventPickUp_Parms), &Z_Construct_UFunction_UPickUpItem_PickUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickUpItem_PickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickUpItem_PickUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickUpItem_PickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PickUpable" },
		{ "ModuleRelativePath", "Public/PickUpItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickUpItem_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickUpItem, nullptr, "PickUp", nullptr, nullptr, sizeof(PickUpItem_eventPickUp_Parms), Z_Construct_UFunction_UPickUpItem_PickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpItem_PickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickUpItem_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpItem_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickUpItem_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPickUpItem_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPickUpItem_NoRegister()
	{
		return UPickUpItem::StaticClass();
	}
	struct Z_Construct_UClass_UPickUpItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickUpItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickUpItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickUpItem_PickUp, "PickUp" }, // 3457240551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PickUpItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickUpItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickUpItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickUpItem_Statics::ClassParams = {
		&UPickUpItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPickUpItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickUpItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickUpItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickUpItem, 2003155575);
	template<> INVENTARIO_API UClass* StaticClass<UPickUpItem>()
	{
		return UPickUpItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickUpItem(Z_Construct_UClass_UPickUpItem, &UPickUpItem::StaticClass, TEXT("/Script/Inventario"), TEXT("UPickUpItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpItem);
	static FName NAME_UPickUpItem_PickUp = FName(TEXT("PickUp"));
	bool IPickUpItem::Execute_PickUp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickUpItem::StaticClass()));
		PickUpItem_eventPickUp_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickUpItem_PickUp);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPickUpItem*)(O->GetNativeInterfaceAddress(UPickUpItem::StaticClass())))
		{
			Parms.ReturnValue = I->PickUp_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
