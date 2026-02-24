// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFloat.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFloat_generated_h
#error "HoudiniParameterFloat.generated.h already included, missing '#pragma once' in HoudiniParameterFloat.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterFloat ***************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFloat(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterFloat, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterFloat)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFloat); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterFloat(UHoudiniParameterFloat&&) = delete; \
	UHoudiniParameterFloat(const UHoudiniParameterFloat&) = delete; \
	NO_API virtual ~UHoudiniParameterFloat();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterFloat;

// ********** End Class UHoudiniParameterFloat *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
