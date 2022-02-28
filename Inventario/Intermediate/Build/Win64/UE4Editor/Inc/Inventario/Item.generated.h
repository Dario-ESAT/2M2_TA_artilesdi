// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTARIO_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define INVENTARIO_Item_generated_h

#define Inventario_Source_Inventario_Public_Item_h_13_SPARSE_DATA
#define Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS
#define Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Inventario_Source_Inventario_Public_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define Inventario_Source_Inventario_Public_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define Inventario_Source_Inventario_Public_Item_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define Inventario_Source_Inventario_Public_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define Inventario_Source_Inventario_Public_Item_h_13_PRIVATE_PROPERTY_OFFSET
#define Inventario_Source_Inventario_Public_Item_h_10_PROLOG
#define Inventario_Source_Inventario_Public_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_Public_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_Public_Item_h_13_SPARSE_DATA \
	Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS \
	Inventario_Source_Inventario_Public_Item_h_13_INCLASS \
	Inventario_Source_Inventario_Public_Item_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_Public_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_Public_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_Public_Item_h_13_SPARSE_DATA \
	Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventario_Source_Inventario_Public_Item_h_13_INCLASS_NO_PURE_DECLS \
	Inventario_Source_Inventario_Public_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTARIO_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventario_Source_Inventario_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
