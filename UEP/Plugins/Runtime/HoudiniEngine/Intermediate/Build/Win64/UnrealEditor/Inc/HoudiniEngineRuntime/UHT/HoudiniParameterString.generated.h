// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterString.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterString_generated_h
#error "HoudiniParameterString.generated.h already included, missing '#pragma once' in HoudiniParameterString.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterString_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterString **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterString(); \
	friend struct Z_Construct_UClass_UHoudiniParameterString_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterString, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterString_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterString)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterString) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterString); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterString(UHoudiniParameterString&&) = delete; \
	UHoudiniParameterString(const UHoudiniParameterString&) = delete; \
	NO_API virtual ~UHoudiniParameterString();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterString;

// ********** End Class UHoudiniParameterString ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
