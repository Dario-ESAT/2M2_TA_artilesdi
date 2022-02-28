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
#ifdef PINBALL_DeathPlace_generated_h
#error "DeathPlace.generated.h already included, missing '#pragma once' in DeathPlace.h"
#endif
#define PINBALL_DeathPlace_generated_h

#define Pinball_Source_Pinball_Public_DeathPlace_h_12_SPARSE_DATA
#define Pinball_Source_Pinball_Public_DeathPlace_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMatado);


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatado);


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathPlace(); \
	friend struct Z_Construct_UClass_ADeathPlace_Statics; \
public: \
	DECLARE_CLASS(ADeathPlace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(ADeathPlace)


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADeathPlace(); \
	friend struct Z_Construct_UClass_ADeathPlace_Statics; \
public: \
	DECLARE_CLASS(ADeathPlace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(ADeathPlace)


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathPlace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathPlace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathPlace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathPlace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathPlace(ADeathPlace&&); \
	NO_API ADeathPlace(const ADeathPlace&); \
public:


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathPlace(ADeathPlace&&); \
	NO_API ADeathPlace(const ADeathPlace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathPlace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathPlace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathPlace)


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_PRIVATE_PROPERTY_OFFSET
#define Pinball_Source_Pinball_Public_DeathPlace_h_9_PROLOG
#define Pinball_Source_Pinball_Public_DeathPlace_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_SPARSE_DATA \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_RPC_WRAPPERS \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_INCLASS \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pinball_Source_Pinball_Public_DeathPlace_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_SPARSE_DATA \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_INCLASS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_DeathPlace_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINBALL_API UClass* StaticClass<class ADeathPlace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pinball_Source_Pinball_Public_DeathPlace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
