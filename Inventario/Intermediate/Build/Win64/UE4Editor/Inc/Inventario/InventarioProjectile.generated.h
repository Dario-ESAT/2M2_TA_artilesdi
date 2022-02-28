// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INVENTARIO_InventarioProjectile_generated_h
#error "InventarioProjectile.generated.h already included, missing '#pragma once' in InventarioProjectile.h"
#endif
#define INVENTARIO_InventarioProjectile_generated_h

#define Inventario_Source_Inventario_InventarioProjectile_h_15_SPARSE_DATA
#define Inventario_Source_Inventario_InventarioProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Inventario_Source_Inventario_InventarioProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Inventario_Source_Inventario_InventarioProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventarioProjectile(); \
	friend struct Z_Construct_UClass_AInventarioProjectile_Statics; \
public: \
	DECLARE_CLASS(AInventarioProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AInventarioProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Inventario_Source_Inventario_InventarioProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInventarioProjectile(); \
	friend struct Z_Construct_UClass_AInventarioProjectile_Statics; \
public: \
	DECLARE_CLASS(AInventarioProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventario"), NO_API) \
	DECLARE_SERIALIZER(AInventarioProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Inventario_Source_Inventario_InventarioProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventarioProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventarioProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventarioProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventarioProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventarioProjectile(AInventarioProjectile&&); \
	NO_API AInventarioProjectile(const AInventarioProjectile&); \
public:


#define Inventario_Source_Inventario_InventarioProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventarioProjectile(AInventarioProjectile&&); \
	NO_API AInventarioProjectile(const AInventarioProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventarioProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventarioProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventarioProjectile)


#define Inventario_Source_Inventario_InventarioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AInventarioProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AInventarioProjectile, ProjectileMovement); }


#define Inventario_Source_Inventario_InventarioProjectile_h_12_PROLOG
#define Inventario_Source_Inventario_InventarioProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_InventarioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_InventarioProjectile_h_15_SPARSE_DATA \
	Inventario_Source_Inventario_InventarioProjectile_h_15_RPC_WRAPPERS \
	Inventario_Source_Inventario_InventarioProjectile_h_15_INCLASS \
	Inventario_Source_Inventario_InventarioProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventario_Source_Inventario_InventarioProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventario_Source_Inventario_InventarioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Inventario_Source_Inventario_InventarioProjectile_h_15_SPARSE_DATA \
	Inventario_Source_Inventario_InventarioProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventario_Source_Inventario_InventarioProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Inventario_Source_Inventario_InventarioProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTARIO_API UClass* StaticClass<class AInventarioProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventario_Source_Inventario_InventarioProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
