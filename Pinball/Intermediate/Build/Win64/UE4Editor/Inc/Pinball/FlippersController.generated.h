// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINBALL_FlippersController_generated_h
#error "FlippersController.generated.h already included, missing '#pragma once' in FlippersController.h"
#endif
#define PINBALL_FlippersController_generated_h

#define Pinball_Source_Pinball_FlippersController_h_13_SPARSE_DATA
#define Pinball_Source_Pinball_FlippersController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndKickLeft); \
	DECLARE_FUNCTION(execEndKickRight); \
	DECLARE_FUNCTION(execKickRight); \
	DECLARE_FUNCTION(execKickLeft);


#define Pinball_Source_Pinball_FlippersController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndKickLeft); \
	DECLARE_FUNCTION(execEndKickRight); \
	DECLARE_FUNCTION(execKickRight); \
	DECLARE_FUNCTION(execKickLeft);


#define Pinball_Source_Pinball_FlippersController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlippersController(); \
	friend struct Z_Construct_UClass_AFlippersController_Statics; \
public: \
	DECLARE_CLASS(AFlippersController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(AFlippersController)


#define Pinball_Source_Pinball_FlippersController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFlippersController(); \
	friend struct Z_Construct_UClass_AFlippersController_Statics; \
public: \
	DECLARE_CLASS(AFlippersController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinball"), NO_API) \
	DECLARE_SERIALIZER(AFlippersController)


#define Pinball_Source_Pinball_FlippersController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlippersController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlippersController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlippersController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlippersController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlippersController(AFlippersController&&); \
	NO_API AFlippersController(const AFlippersController&); \
public:


#define Pinball_Source_Pinball_FlippersController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlippersController(AFlippersController&&); \
	NO_API AFlippersController(const AFlippersController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlippersController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlippersController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlippersController)


#define Pinball_Source_Pinball_FlippersController_h_13_PRIVATE_PROPERTY_OFFSET
#define Pinball_Source_Pinball_FlippersController_h_10_PROLOG
#define Pinball_Source_Pinball_FlippersController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_FlippersController_h_13_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_FlippersController_h_13_SPARSE_DATA \
	Pinball_Source_Pinball_FlippersController_h_13_RPC_WRAPPERS \
	Pinball_Source_Pinball_FlippersController_h_13_INCLASS \
	Pinball_Source_Pinball_FlippersController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pinball_Source_Pinball_FlippersController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pinball_Source_Pinball_FlippersController_h_13_PRIVATE_PROPERTY_OFFSET \
	Pinball_Source_Pinball_FlippersController_h_13_SPARSE_DATA \
	Pinball_Source_Pinball_FlippersController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pinball_Source_Pinball_FlippersController_h_13_INCLASS_NO_PURE_DECLS \
	Pinball_Source_Pinball_FlippersController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINBALL_API UClass* StaticClass<class AFlippersController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pinball_Source_Pinball_FlippersController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
