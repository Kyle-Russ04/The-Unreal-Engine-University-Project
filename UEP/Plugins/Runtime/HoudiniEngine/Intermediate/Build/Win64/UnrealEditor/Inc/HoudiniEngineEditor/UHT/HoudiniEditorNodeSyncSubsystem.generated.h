// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEditorNodeSyncSubsystem.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniEditorNodeSyncSubsystem_generated_h
#error "HoudiniEditorNodeSyncSubsystem.generated.h already included, missing '#pragma once' in HoudiniEditorNodeSyncSubsystem.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEditorNodeSyncSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin ScriptStruct FHoudiniNodeSyncOptions *******************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniNodeSyncOptions;
// ********** End ScriptStruct FHoudiniNodeSyncOptions *********************************************

// ********** Begin Class UHoudiniEditorNodeSyncSubsystem ******************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendContentBrowserSelection); \
	DECLARE_FUNCTION(execSendWorldSelection); \
	DECLARE_FUNCTION(execFetchFromHoudini); \
	DECLARE_FUNCTION(execSendToHoudini);


HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniEditorNodeSyncSubsystem(); \
	friend struct Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniEditorNodeSyncSubsystem, UAssetEditorUISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniEditorNodeSyncSubsystem)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniEditorNodeSyncSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniEditorNodeSyncSubsystem(UHoudiniEditorNodeSyncSubsystem&&) = delete; \
	UHoudiniEditorNodeSyncSubsystem(const UHoudiniEditorNodeSyncSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniEditorNodeSyncSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEditorNodeSyncSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniEditorNodeSyncSubsystem) \
	NO_API virtual ~UHoudiniEditorNodeSyncSubsystem();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_140_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniEditorNodeSyncSubsystem;

// ********** End Class UHoudiniEditorNodeSyncSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
