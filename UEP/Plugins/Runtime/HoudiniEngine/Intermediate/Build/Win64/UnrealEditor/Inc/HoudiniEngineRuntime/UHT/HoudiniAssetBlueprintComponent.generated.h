// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetBlueprintComponent.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h
#error "HoudiniAssetBlueprintComponent.generated.h already included, missing '#pragma once' in HoudiniAssetBlueprintComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniAssetBlueprintComponent ******************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetToggleValueAt); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execHasParameter);


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniAssetBlueprintComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniAssetBlueprintComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniAssetBlueprintComponent)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniAssetBlueprintComponent(UHoudiniAssetBlueprintComponent&&) = delete; \
	UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetBlueprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetBlueprintComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetBlueprintComponent) \
	NO_API virtual ~UHoudiniAssetBlueprintComponent();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_43_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniAssetBlueprintComponent;

// ********** End Class UHoudiniAssetBlueprintComponent ********************************************

// ********** Begin ScriptStruct FHoudiniAssetBlueprintOutput **************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct();


struct FHoudiniAssetBlueprintOutput;
// ********** End ScriptStruct FHoudiniAssetBlueprintOutput ****************************************

// ********** Begin ScriptStruct FHoudiniAssetBlueprintInstanceData ********************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


struct FHoudiniAssetBlueprintInstanceData;
// ********** End ScriptStruct FHoudiniAssetBlueprintInstanceData **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
