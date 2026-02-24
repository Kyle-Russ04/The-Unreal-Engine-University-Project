// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterButton.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterButton_generated_h
#error "HoudiniParameterButton.generated.h already included, missing '#pragma once' in HoudiniParameterButton.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterButton **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButton_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterButton(); \
	friend struct Z_Construct_UClass_UHoudiniParameterButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterButton, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterButton_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterButton)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterButton); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterButton(UHoudiniParameterButton&&) = delete; \
	UHoudiniParameterButton(const UHoudiniParameterButton&) = delete; \
	NO_API virtual ~UHoudiniParameterButton();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterButton;

// ********** End Class UHoudiniParameterButton ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
