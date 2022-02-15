// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINBALL_GameModePinball_generated_h
#error "GameModePinball.generated.h already included, missing '#pragma once' in GameModePinball.h"
#endif
#define PINBALL_GameModePinball_generated_h

#define Pinball_Source_Pinball_Public_GameModePinball_h_15_SPARSE_DATA
#define Pinball_Source_Pinball_Public_GameModePinball_h_15_RPC_WRAPPERS
#define Pinball_Source_Pinball_Public_GameModePinball_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Pinball_Source_Pinball_Public_GameModePinball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModePinball(); \
	friend struct Z_Construct_UClass_AGameModePinball_Statics; \
public: \
	DECLARE_CLASS(AGameModePinball, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(AGameModePinball)


#define Pinball_Source_Pinball_Public_GameModePinball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameModePinball(); \
	friend struct Z_Construct_UClass_AGameModePinball_Statics; \
public: \
	DECLARE_CLASS(AGameModePinball, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(AGameModePinball)


#define Pinball_Source_Pinball_Public_GameModePinball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModePinball(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModePinball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModePinball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModePinball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModePinball(AGameModePinball&&); \
	NO_API AGameModePinball(const AGameModePinball&); \
public:


#define Pinball_Source_Pinball_Public_GameModePinball_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModePinball(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModePinball(AGameModePinball&&); \
	NO_API AGameModePinball(const AGameModePinball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModePinball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModePinball); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModePinball)


#define Pinball_Source_Pinball_Public_GameModePinball_h_15_PRIVATE_PROPERTY_OFFSET
#define Pinball_Source_Pinball_Public_GameModePinball_h_12_PROLOG
#define Pinball_Source_Pinball_Public_GameModePinball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_SPARSE_DATA \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_RPC_WRAPPERS \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_INCLASS \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pinball_Source_Pinball_Public_GameModePinball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_SPARSE_DATA \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_INCLASS_NO_PURE_DECLS \
	Pinball_Source_Pinball_Public_GameModePinball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINBALL_API UClass* StaticClass<class AGameModePinball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pinball_Source_Pinball_Public_GameModePinball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
