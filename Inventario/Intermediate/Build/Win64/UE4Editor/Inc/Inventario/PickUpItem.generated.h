// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTARIO_PickUpItem_generated_h
#error "PickUpItem.generated.h already included, missing '#pragma once' in PickUpItem.h"
#endif
#define INVENTARIO_PickUpItem_generated_h

#define Inventario_Source_Inventario_Public_PickUpItem_h_12_SPARSE_DATA
#define Inventario_Source_Inventario_Public_PickUpItem_h_12_RPC_WRAPPERS \
	virtual bool PickUp_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPickUp);


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool PickUp_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPickUp);


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_EVENT_PARMS \
	struct PickUpItem_eventPickUp_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PickUpItem_eventPickUp_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_CALLBACK_WRAPPERS
#define Inventario_Source_Inventario_Public_PickUpItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTARIO_API UPickUpItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickUpItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTARIO_API, UPickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickUpItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTARIO_API UPickUpItem(UPickUpItem&&); \
	INVENTARIO_API UPickUpItem(const UPickUpItem&); \
public:


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTARIO_API UPickUpItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTARIO_API UPickUpItem(UPickUpItem&&); \
	INVENTARIO_API UPickUpItem(const UPickUpItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTARIO_API, UPickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickUpItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickUpItem)


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickUpItem(); \
	friend struct Z_Construct_UClass_UPickUpItem_Statics; \
public: \
	DECLARE_CLASS(UPickUpItem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Inventario"), INVENTARIO_API) \
	DECLARE_SERIALIZER(UPickUpItem)


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_GENERATED_UINTERFACE_BODY() \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_GENERATED_UINTERFACE_BODY() \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickUpItem() {} \
public: \
	typedef UPickUpItem UClassType; \
	typedef IPickUpItem ThisClass; \
	static bool Execute_PickUp(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Inventario_Source_Inventario_Public_PickUpItem_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickUpItem() {} \
public: \
	typedef UPickUpItem UClassType; \
	typedef IPickUpItem ThisClass; \
	static bool Execute_PickUp(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Inventario_Source_Inventario_Public_PickUpItem_h_10_PROLOG \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_EVENT_PARMS


#define Inventario_Source_Inventario_Public_PickUpItem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_SPARSE_DATA \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_RPC_WRAPPERS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_CALLBACK_WRAPPERS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_Public_PickUpItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_SPARSE_DATA \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_CALLBACK_WRAPPERS \
	Inventario_Source_Inventario_Public_PickUpItem_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTARIO_API UClass* StaticClass<class UPickUpItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventario_Source_Inventario_Public_PickUpItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
