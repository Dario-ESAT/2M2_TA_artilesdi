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
#ifdef PINBALL_Booster_generated_h
#error "Booster.generated.h already included, missing '#pragma once' in Booster.h"
#endif
#define PINBALL_Booster_generated_h

#define Pinball_Source_Pinball_Public_Booster_h_11_SPARSE_DATA
#define Pinball_Source_Pinball_Public_Booster_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChocaBola);


#define Pinball_Source_Pinball_Public_Booster_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChocaBola);


#define Pinball_Source_Pinball_Public_Booster_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABooster(); \
	friend struct Z_Construct_UClass_ABooster_Statics; \
public: \
	DECLARE_CLASS(ABooster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(ABooster)


#define Pinball_Source_Pinball_Public_Booster_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABooster(); \
	friend struct Z_Construct_UClass_ABooster_Statics; \
public: \
	DECLARE_CLASS(ABooster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(ABooster)


#define Pinball_Source_Pinball_Public_Booster_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABooster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABooster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABooster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABooster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABooster(ABooster&&); \
	NO_API ABooster(const ABooster&); \
public:


#define Pinball_Source_Pinball_Public_Booster_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABooster(ABooster&&); \
	NO_API ABooster(const ABooster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABooster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABooster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABooster)


#define Pinball_Source_Pinball_Public_Booster_h_11_PRIVATE_PROPERTY_OFFSET
#define Pinball_Source_Pinball_Public_Booster_h_8_PROLOG
#define Pinball_Source_Pinball_Public_Booster_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_Booster_h_11_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_Booster_h_11_SPARSE_DATA \
	Pinball_Source_Pinball_Public_Booster_h_11_RPC_WRAPPERS \
	Pinball_Source_Pinball_Public_Booster_h_11_INCLASS \
	Pinball_Source_Pinball_Public_Booster_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pinball_Source_Pinball_Public_Booster_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_Booster_h_11_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_Booster_h_11_SPARSE_DATA \
	Pinball_Source_Pinball_Public_Booster_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_Booster_h_11_INCLASS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_Booster_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINBALL_API UClass* StaticClass<class ABooster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pinball_Source_Pinball_Public_Booster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
