// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterToggle.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterToggle_generated_h
#error "HoudiniParameterToggle.generated.h already included, missing '#pragma once' in HoudiniParameterToggle.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterToggle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterToggle **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterToggle_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterToggle(); \
	friend struct Z_Construct_UClass_UHoudiniParameterToggle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterToggle_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterToggle, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterToggle_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterToggle)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterToggle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterToggle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterToggle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterToggle); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterToggle(UHoudiniParameterToggle&&) = delete; \
	UHoudiniParameterToggle(const UHoudiniParameterToggle&) = delete; \
	NO_API virtual ~UHoudiniParameterToggle();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterToggle;

// ********** End Class UHoudiniParameterToggle ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
