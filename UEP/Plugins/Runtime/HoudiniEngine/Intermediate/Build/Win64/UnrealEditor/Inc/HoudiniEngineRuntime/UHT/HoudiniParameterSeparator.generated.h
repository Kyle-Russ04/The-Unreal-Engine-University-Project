// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterSeparator.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterSeparator_generated_h
#error "HoudiniParameterSeparator.generated.h already included, missing '#pragma once' in HoudiniParameterSeparator.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterSeparator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterSeparator ***********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterSeparator_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterSeparator(); \
	friend struct Z_Construct_UClass_UHoudiniParameterSeparator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterSeparator_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterSeparator, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterSeparator_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterSeparator)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterSeparator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterSeparator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterSeparator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterSeparator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterSeparator(UHoudiniParameterSeparator&&) = delete; \
	UHoudiniParameterSeparator(const UHoudiniParameterSeparator&) = delete; \
	NO_API virtual ~UHoudiniParameterSeparator();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterSeparator;

// ********** End Class UHoudiniParameterSeparator *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
