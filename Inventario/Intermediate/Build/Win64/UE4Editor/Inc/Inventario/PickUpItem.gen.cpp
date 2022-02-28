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
	void UPickUpItem::StaticRegisterNativesUPickUpItem()
	{
	}
	UClass* Z_Construct_UClass_UPickUpItem_NoRegister()
	{
		return UPickUpItem::StaticClass();
	}
	struct Z_Construct_UClass_UPickUpItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpItem_Statics::Class_MetaDataParams[] = {
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UPickUpItem, 360787333);
	template<> INVENTARIO_API UClass* StaticClass<UPickUpItem>()
	{
		return UPickUpItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickUpItem(Z_Construct_UClass_UPickUpItem, &UPickUpItem::StaticClass, TEXT("/Script/Inventario"), TEXT("UPickUpItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
