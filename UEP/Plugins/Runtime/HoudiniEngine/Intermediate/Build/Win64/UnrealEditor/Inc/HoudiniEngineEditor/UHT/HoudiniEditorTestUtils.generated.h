// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/HoudiniEditorTestUtils.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniEditorTestUtils_generated_h
#error "HoudiniEditorTestUtils.generated.h already included, missing '#pragma once' in HoudiniEditorTestUtils.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEditorTestUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHoudiniPublicAPIAssetWrapper;

// ********** Begin Class UHoudiniEditorTestObject *************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostProcessingCallback); \
	DECLARE_FUNCTION(execPostCookCallback); \
	DECLARE_FUNCTION(execPostInstantiationCallback); \
	DECLARE_FUNCTION(execPreInstantiationCallback);


HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorTestObject_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniEditorTestObject(); \
	friend struct Z_Construct_UClass_UHoudiniEditorTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniEditorTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniEditorTestObject_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniEditorTestObject)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniEditorTestObject(UHoudiniEditorTestObject&&) = delete; \
	UHoudiniEditorTestObject(const UHoudiniEditorTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniEditorTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEditorTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniEditorTestObject) \
	NO_API virtual ~UHoudiniEditorTestObject();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_377_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniEditorTestObject;

// ********** End Class UHoudiniEditorTestObject ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
