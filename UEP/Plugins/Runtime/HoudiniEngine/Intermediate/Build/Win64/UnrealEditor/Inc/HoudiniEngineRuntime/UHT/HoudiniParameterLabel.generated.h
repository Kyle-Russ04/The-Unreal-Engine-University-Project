// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterLabel.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterLabel_generated_h
#error "HoudiniParameterLabel.generated.h already included, missing '#pragma once' in HoudiniParameterLabel.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterLabel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterLabel ***************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterLabel_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterLabel(); \
	friend struct Z_Construct_UClass_UHoudiniParameterLabel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterLabel_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterLabel, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterLabel_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterLabel)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterLabel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterLabel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterLabel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterLabel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterLabel(UHoudiniParameterLabel&&) = delete; \
	UHoudiniParameterLabel(const UHoudiniParameterLabel&) = delete; \
	NO_API virtual ~UHoudiniParameterLabel();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterLabel;

// ********** End Class UHoudiniParameterLabel *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterLabel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
