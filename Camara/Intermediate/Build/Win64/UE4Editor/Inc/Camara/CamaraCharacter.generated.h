// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMARA_CamaraCharacter_generated_h
#error "CamaraCharacter.generated.h already included, missing '#pragma once' in CamaraCharacter.h"
#endif
#define CAMARA_CamaraCharacter_generated_h

#define Camara_Source_Camara_CamaraCharacter_h_12_SPARSE_DATA
#define Camara_Source_Camara_CamaraCharacter_h_12_RPC_WRAPPERS
#define Camara_Source_Camara_CamaraCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Camara_Source_Camara_CamaraCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamaraCharacter(); \
	friend struct Z_Construct_UClass_ACamaraCharacter_Statics; \
public: \
	DECLARE_CLASS(ACamaraCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Camara"), NO_API) \
	DECLARE_SERIALIZER(ACamaraCharacter)


#define Camara_Source_Camara_CamaraCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACamaraCharacter(); \
	friend struct Z_Construct_UClass_ACamaraCharacter_Statics; \
public: \
	DECLARE_CLASS(ACamaraCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Camara"), NO_API) \
	DECLARE_SERIALIZER(ACamaraCharacter)


#define Camara_Source_Camara_CamaraCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamaraCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamaraCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamaraCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamaraCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamaraCharacter(ACamaraCharacter&&); \
	NO_API ACamaraCharacter(const ACamaraCharacter&); \
public:


#define Camara_Source_Camara_CamaraCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamaraCharacter(ACamaraCharacter&&); \
	NO_API ACamaraCharacter(const ACamaraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamaraCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamaraCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamaraCharacter)


#define Camara_Source_Camara_CamaraCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACamaraCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACamaraCharacter, FollowCamera); }


#define Camara_Source_Camara_CamaraCharacter_h_9_PROLOG
#define Camara_Source_Camara_CamaraCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Camara_Source_Camara_CamaraCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Camara_Source_Camara_CamaraCharacter_h_12_SPARSE_DATA \
	Camara_Source_Camara_CamaraCharacter_h_12_RPC_WRAPPERS \
	Camara_Source_Camara_CamaraCharacter_h_12_INCLASS \
	Camara_Source_Camara_CamaraCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Camara_Source_Camara_CamaraCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Camara_Source_Camara_CamaraCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Camara_Source_Camara_CamaraCharacter_h_12_SPARSE_DATA \
	Camara_Source_Camara_CamaraCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Camara_Source_Camara_CamaraCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Camara_Source_Camara_CamaraCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMARA_API UClass* StaticClass<class ACamaraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Camara_Source_Camara_CamaraCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
