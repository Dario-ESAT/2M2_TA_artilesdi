// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTARIO_InventarioCharacter_generated_h
#error "InventarioCharacter.generated.h already included, missing '#pragma once' in InventarioCharacter.h"
#endif
#define INVENTARIO_InventarioCharacter_generated_h

#define Inventario_Source_Inventario_InventarioCharacter_h_20_SPARSE_DATA
#define Inventario_Source_Inventario_InventarioCharacter_h_20_RPC_WRAPPERS
#define Inventario_Source_Inventario_InventarioCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Inventario_Source_Inventario_InventarioCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventarioCharacter(); \
	friend struct Z_Construct_UClass_AInventarioCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventarioCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AInventarioCharacter)


#define Inventario_Source_Inventario_InventarioCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAInventarioCharacter(); \
	friend struct Z_Construct_UClass_AInventarioCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventarioCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AInventarioCharacter)


#define Inventario_Source_Inventario_InventarioCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventarioCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventarioCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventarioCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventarioCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventarioCharacter(AInventarioCharacter&&); \
	NO_API AInventarioCharacter(const AInventarioCharacter&); \
public:


#define Inventario_Source_Inventario_InventarioCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventarioCharacter(AInventarioCharacter&&); \
	NO_API AInventarioCharacter(const AInventarioCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventarioCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventarioCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventarioCharacter)


#define Inventario_Source_Inventario_InventarioCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AInventarioCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AInventarioCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AInventarioCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AInventarioCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AInventarioCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AInventarioCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AInventarioCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AInventarioCharacter, L_MotionController); }


#define Inventario_Source_Inventario_InventarioCharacter_h_17_PROLOG
#define Inventario_Source_Inventario_InventarioCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_InventarioCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_InventarioCharacter_h_20_SPARSE_DATA \
	Inventario_Source_Inventario_InventarioCharacter_h_20_RPC_WRAPPERS \
	Inventario_Source_Inventario_InventarioCharacter_h_20_INCLASS \
	Inventario_Source_Inventario_InventarioCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_InventarioCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_InventarioCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_InventarioCharacter_h_20_SPARSE_DATA \
	Inventario_Source_Inventario_InventarioCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventario_Source_Inventario_InventarioCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Inventario_Source_Inventario_InventarioCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTARIO_API UClass* StaticClass<class AInventarioCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventario_Source_Inventario_InventarioCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
