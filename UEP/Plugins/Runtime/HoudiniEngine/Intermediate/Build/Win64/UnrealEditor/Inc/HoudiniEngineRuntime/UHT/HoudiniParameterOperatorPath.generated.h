// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterOperatorPath.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterOperatorPath_generated_h
#error "HoudiniParameterOperatorPath.generated.h already included, missing '#pragma once' in HoudiniParameterOperatorPath.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterOperatorPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterOperatorPath ********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterOperatorPath(); \
	friend struct Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterOperatorPath, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterOperatorPath)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterOperatorPath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterOperatorPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterOperatorPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterOperatorPath); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterOperatorPath(UHoudiniParameterOperatorPath&&) = delete; \
	UHoudiniParameterOperatorPath(const UHoudiniParameterOperatorPath&) = delete; \
	NO_API virtual ~UHoudiniParameterOperatorPath();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_36_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_40_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterOperatorPath;

// ********** End Class UHoudiniParameterOperatorPath **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
