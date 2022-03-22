// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef INVENTARIO_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define INVENTARIO_Item_generated_h

#define Inventario_Source_Inventario_Public_Item_h_13_SPARSE_DATA
#define Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS \
	virtual bool Drop_Implementation(FVector position); \
	virtual bool PickUp_Implementation(); \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickUp);


#define Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickUp);


#define Inventario_Source_Inventario_Public_Item_h_13_EVENT_PARMS \
	struct Item_eventDrop_Parms \
	{ \
		FVector position; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Item_eventDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Item_eventPickUp_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Item_eventPickUp_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Inventario_Source_Inventario_Public_Item_h_13_CALLBACK_WRAPPERS
#define Inventario_Source_Inventario_Public_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define Inventario_Source_Inventario_Public_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define Inventario_Source_Inventario_Public_Item_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Inventario_Source_Inventario_Public_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Inventario_Source_Inventario_Public_Item_h_13_PRIVATE_PROPERTY_OFFSET
#define Inventario_Source_Inventario_Public_Item_h_10_PROLOG \
	Inventario_Source_Inventario_Public_Item_h_13_EVENT_PARMS


#define Inventario_Source_Inventario_Public_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_Public_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_Public_Item_h_13_SPARSE_DATA \
	Inventario_Source_Inventario_Public_Item_h_13_RPC_WRAPPERS \
	Inventario_Source_Inventario_Public_Item_h_13_CALLBACK_WRAPPERS \
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
	Inventario_Source_Inventario_Public_Item_h_13_CALLBACK_WRAPPERS \
	Inventario_Source_Inventario_Public_Item_h_13_INCLASS_NO_PURE_DECLS \
	Inventario_Source_Inventario_Public_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTARIO_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventario_Source_Inventario_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
