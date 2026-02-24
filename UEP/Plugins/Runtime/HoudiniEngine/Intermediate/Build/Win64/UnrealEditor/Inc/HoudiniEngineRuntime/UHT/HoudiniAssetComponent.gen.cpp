// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniAssetComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/TimerHandle.h"
#include "HoudiniOutput.h"
#include "HoudiniRuntimeSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniAssetComponent ***************************************************
void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniAssetComponent;
UClass* UHoudiniAssetComponent::GetPrivateStaticClass()
{
	using TClass = UHoudiniAssetComponent;
	if (!Z_Registration_Info_UClass_UHoudiniAssetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniAssetComponent"),
			Z_Registration_Info_UClass_UHoudiniAssetComponent.InnerSingleton,
			StaticRegisterNativesUHoudiniAssetComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
{
	return UHoudiniAssetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Common" },
		{ "HideCategories", "Object Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HoudiniAssetComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetHoudiniAssetData()->HoudiniAsset\n// Houdini Asset associated with this component.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetHoudiniAssetData()->HoudiniAsset\nHoudini Asset associated with this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetParameterData()->bCookOnParameterChange\n// Automatically cook when a parameter or input is changed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetParameterData()->bCookOnParameterChange\nAutomatically cook when a parameter or input is changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetComponentData()->bUploadTransformsToHoudiniEngine\n// Enables uploading of transformation changes back to Houdini Engine.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->bUploadTransformsToHoudiniEngine\nEnables uploading of transformation changes back to Houdini Engine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetComponentData()->bCookOnTransformChange\n// Transform changes automatically trigger cooks.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->bCookOnTransformChange\nTransform changes automatically trigger cooks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnAssetInputCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetInputData()->bCookOnCookableInputCook\n// This asset will cook when its asset input cook\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetInputData()->bCookOnCookableInputCook\nThis asset will cook when its asset input cook" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputless_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetOutputData()->bOutputless\n// Enabling this will prevent the HDA from producing any output after cooking.\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bOutputless\nEnabling this will prevent the HDA from producing any output after cooking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->bOutputTemplateGeos\n// Enabling this will allow outputing the asset's templated geos\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bOutputTemplateGeos\nEnabling this will allow outputing the asset's templated geos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetOutputData()->bUseOutputNodes\n// Enabling this will allow outputing the asset's output nodes\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bUseOutputNodes\nEnabling this will allow outputing the asset's output nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetOutputData()->TemporaryCookFolder\n// Temporary cook folder\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->TemporaryCookFolder\nTemporary cook folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetBakingData()->BakeFolder\n// Folder used for baking this asset's outputs (unless set by prim/detail attribute on the output). Falls back to\n// the default from the plugin settings if not set.\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->BakeFolder\nFolder used for baking this asset's outputs (unless set by prim/detail attribute on the output). Falls back to\nthe default from the plugin settings if not set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshSupport_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->bSplitMeshSupport\n// Whether or not to support multiple mesh outputs on one HDA output. This is currently in Alpha  testing.\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bSplitMeshSupport\nWhether or not to support multiple mesh outputs on one HDA output. This is currently in Alpha  testing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->StaticMeshGenerationProperties\n// Generation properties for the Static Meshes generated by this Houdini Asset\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->StaticMeshGenerationProperties\nGeneration properties for the Static Meshes generated by this Houdini Asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->StaticMeshBuildSettings\n// Build Settings to be used when generating the Static Meshes for this Houdini Asset\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->StaticMeshBuildSettings\nBuild Settings to be used when generating the Static Meshes for this Houdini Asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bOverrideGlobalProxyStaticMeshSettings\n// Override the global fast proxy mesh settings on this component?\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bOverrideGlobalProxyStaticMeshSettings\nOverride the global fast proxy mesh settings on this component?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bEnableProxyStaticMeshOverride\n// For StaticMesh outputs: should a fast proxy be created first?\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bEnableProxyStaticMeshOverride\nFor StaticMesh outputs: should a fast proxy be created first?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementByTimerOverride\n// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementByTimerOverride\nIf fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->ProxyMeshAutoRefineTimeoutSecondsOverride\n// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->ProxyMeshAutoRefineTimeoutSecondsOverride\nIf the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride\n// Automatically refine proxy meshes to UStaticMesh before the map is saved\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride\nAutomatically refine proxy meshes to UStaticMesh before the map is saved" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride\n// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\x09\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride\nAutomatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from Cookable instead:\n// GetCookable()->bGenerateMenuExpanded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from Cookable instead:\nGetCookable()->bGenerateMenuExpanded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetOptionMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bAssetOptionMenuExpanded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bAssetOptionMenuExpanded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHelpAndDebugMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetXXXXData()->bHelpAndDebugMenuExpanded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetXXXXData()->bHelpAndDebugMenuExpanded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetBakingData()->HoudiniEngineBakeOption\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->HoudiniEngineBakeOption" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOutputAfterBake_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetBakingData()->bRemoveOutputAfterBake\n// If true, then after a successful bake, the HACs outputs will be cleared and removed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->bRemoveOutputAfterBake\nIf true, then after a successful bake, the HACs outputs will be cleared and removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetBakingData()->bRecenterBakedActors\n// If true, recenter baked actors to their bounding box center after bake\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->bRecenterBakedActors\nIf true, recenter baked actors to their bounding box center after bake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousBake_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetBakingData()->bReplacePreviousBake\n// If true, replace the previously baked output (if any) instead of creating new objects\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->bReplacePreviousBake\nIf true, replace the previously baked output (if any) instead of creating new objects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorBakeOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetBakingData()->ActorBakeOption\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->ActorBakeOption" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUseTempLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->bLandscapeUseTempLayers\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bLandscapeUseTempLayers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCurveEditing_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->bEnableCurveEditing\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->bEnableCurveEditing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdateEditorProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bNeedToUpdateEditorProperties\n// Indicates whether or not this component should update the editor's UI\n// This is to prevent successive calls of the function for the same HDAs \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bNeedToUpdateEditorProperties\nIndicates whether or not this component should update the editor's UI\nThis is to prevent successive calls of the function for the same HDAs" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->NodeId\n// Id of corresponding Houdini asset.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->NodeId\nId of corresponding Houdini asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIdsToCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->NodeIdsToCook\n// Ids of the nodes that should be cook for this HAC\n// This is for additional output and templated nodes if they are used.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->NodeIdsToCook\nIds of the nodes that should be cook for this HAC\nThis is for additional output and templated nodes if they are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNodeCookCounts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->NodesToCookCookCounts\n// Cook counts for nodes in the NodeIdsToCook array.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->NodesToCookCookCounts\nCook counts for nodes in the NodeIdsToCook array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamHoudiniAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetInputData()->DownstreamCookables\n// List of dependent downstream HACs that have us as an asset input\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetInputData()->DownstreamCookables\nList of dependent downstream HACs that have us as an asset input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->CookableGUID\n// Unique GUID created by component.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->CookableGUID\nUnique GUID created by component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->HapiGUID\n// GUID used to track asynchronous cooking requests.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->HapiGUID\nGUID used to track asynchronous cooking requests." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiAssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetHoudiniAssetData()->HapiAssetName\n// The asset name of the selected asset inside the asset library\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetHoudiniAssetData()->HapiAssetName\nThe asset name of the selected asset inside the asset library" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->CurrentState\n// Current state of the asset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->CurrentState\nCurrent state of the asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetStateResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->CurrentStateResult\n// Result of the current asset's state\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->CurrentStateResult\nResult of the current asset's state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastComponentTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetComponentData()->LastComponentTransform\n// Used to compare transform changes and whether we need to\n// send transform updates to Houdini.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->LastComponentTransform\nUsed to compare transform changes and whether we need to\nsend transform updates to Houdini." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetHoudiniAssetData()->SubAssetIndex\n// Subasset index\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetHoudiniAssetData()->SubAssetIndex\nSubasset index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->CookCount\n// Number of times this asset has been cooked.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->CookCount\nNumber of times this asset has been cooked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bHasBeenLoaded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bHasBeenLoaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: GetCookable()->bHasBeenDuplicated\n// Sometimes, specifically when editing level instances, the Unreal Editor will duplicate the HDA,\n// then duplicate it again, before we get a change to call UpdatePostDuplicate().\n// So bHasBeenDuplicated should not be cleared and is so not marked DuplicateTransient.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead: GetCookable()->bHasBeenDuplicated\nSometimes, specifically when editing level instances, the Unreal Editor will duplicate the HDA,\nthen duplicate it again, before we get a change to call UpdatePostDuplicate().\nSo bHasBeenDuplicated should not be cleared and is so not marked DuplicateTransient." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bPendingDelete\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bPendingDelete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bRecookRequested\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bRecookRequested" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bRebuildRequested\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bRebuildRequested" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bEnableCooking\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bEnableCooking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bForceNeedUpdate\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bForceNeedUpdate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bLastCookSuccess\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bLastCookSuccess" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameterDefinitionUpdateNeeded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetParameterData()->bParameterDefinitionUpdateNeeded\n// Indicates that the parameter state (excluding values) on the HAC and the instantiated node needs to be synced.\n// The most common use for this would be a newly instantiated HDA that has only a default parameter interface\n// from its asset definition, and needs to sync pre-cook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetParameterData()->bParameterDefinitionUpdateNeeded\nIndicates that the parameter state (excluding values) on the HAC and the instantiated node needs to be synced.\nThe most common use for this would be a newly instantiated HDA that has only a default parameter interface\nfrom its asset definition, and needs to sync pre-cook." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlueprintStructureModified_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlueprintModified_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOT COOKABLE\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOT COOKABLE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetParameterData()->Parameters\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetParameterData()->Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetParameterData()->Parameters\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetParameterData()->Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetInputData()->Inputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetInputData()->Inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetInputData()->Inputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetInputData()->Inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->Outputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->Outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->Outputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->Outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetBakingData()->BakedOutputs\n// The baked outputs from the last bake.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->BakedOutputs\nThe baked outputs from the last bake." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UntrackedOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetOutputData()->UntrackedOutputs\n// Any actors that aren't explicitly\n// tracked by output objects should be registered\n// here so that they can be cleaned up.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetOutputData()->UntrackedOutputs\nAny actors that aren't explicitly\ntracked by output objects should be registered\nhere so that they can be cleaned up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetComponentData()->HandleComponents\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->HandleComponents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasComponentTransformChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetComponentData()->bHasComponentTransformChanged\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->bHasComponentTransformChanged" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->bFullyLoaded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->bFullyLoaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGAssetLink_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetPDGData()->PDGAssetLink\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetPDGData()->PDGAssetLink" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPDGAssetLinkInitialized_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetPDGData()->PDGAssetLink\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetPDGData()->PDGAssetLink" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineMeshesTimer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetProxyData()->RefineMeshesTimer\n// Timer that is used to trigger creation of UStaticMesh for all mesh outputs\n// that still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\n// at the end of the PostCook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->RefineMeshesTimer\nTimer that is used to trigger creation of UStaticMesh for all mesh outputs\nthat still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\nat the end of the PostCook." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoProxyMeshNextCookRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetProxyData()->bNoProxyMeshNextCookRequested\n// If true, don't build a proxy mesh next cook (regardless of global or override settings),\n// instead build the UStaticMesh directly (if applicable for the output types).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bNoProxyMeshNextCookRequested\nIf true, don't build a proxy mesh next cook (regardless of global or override settings),\ninstead build the UStaticMesh directly (if applicable for the output types)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeAfterNextCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetBakingData()->BakeAfterNextCook\n// If true, bake the asset after its next cook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetBakingData()->BakeAfterNextCook\nIf true, bake the asset after its next cook." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedIsPreview_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached flag of whether this object is considered to be a 'preview' component or not.\n// This is typically useful in destructors when references to the World, for example, \n// is no longer available.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached flag of whether this object is considered to be a 'preview' component or not.\nThis is typically useful in destructors when references to the World, for example,\nis no longer available." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTickTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->LastTickTime\n// The last timestamp this component was ticked\n// used to prioritize/limit the number of HAC processed per tick\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->LastTickTime\nThe last timestamp this component was ticked\nused to prioritize/limit the number of HAC processed per tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLiveSyncPingTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead: \n// GetCookable()->GetComponentData()->LastLiveSyncPingTime\n// The last timestamp this component received a session sync update ping\n// used to limit the frequency at which we ping HDAs for session sync updates\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetComponentData()->LastLiveSyncPingTime\nThe last timestamp this component received a session sync update ping\nused to limit the frequency at which we ping HDAs for session sync updates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterPresetBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetParameterData()->ParameterPresetBuffer\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetParameterData()->ParameterPresetBuffer" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayInEditorRefinement_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: get from CookableInstead:\n// GetCookable()->GetProxyData()->bAllowPlayInEditorRefinement\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: get from CookableInstead:\nGetCookable()->GetProxyData()->bAllowPlayInEditorRefinement" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
	static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
	static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
	static void NewProp_bCookOnAssetInputCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnAssetInputCook;
	static void NewProp_bOutputless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputless;
	static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
	static void NewProp_bUseOutputNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemporaryCookFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
	static void NewProp_bSplitMeshSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshSupport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
	static void NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalProxyStaticMeshSettings;
	static void NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimerOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
	static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
#if WITH_EDITORONLY_DATA
	static void NewProp_bGenerateMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMenuExpanded;
	static void NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetOptionMenuExpanded;
	static void NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHelpAndDebugMenuExpanded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
	static void NewProp_bRemoveOutputAfterBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOutputAfterBake;
	static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
	static void NewProp_bReplacePreviousBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousBake;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBakeOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBakeOption;
	static void NewProp_bLandscapeUseTempLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUseTempLayers;
	static void NewProp_bEnableCurveEditing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCurveEditing;
	static void NewProp_bNeedToUpdateEditorProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdateEditorProperties;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIdsToCook_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIdsToCook;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputNodeCookCounts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownstreamHoudiniAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DownstreamHoudiniAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HapiAssetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetStateResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetStateResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastComponentTransform;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetCookCount;
	static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
	static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
	static void NewProp_bPendingDelete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
	static void NewProp_bRecookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
	static void NewProp_bRebuildRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
	static void NewProp_bEnableCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
	static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
	static void NewProp_bLastCookSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
	static void NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterDefinitionUpdateNeeded;
	static void NewProp_bBlueprintStructureModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlueprintStructureModified;
	static void NewProp_bBlueprintModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlueprintModified;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UntrackedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UntrackedOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandleComponents;
	static void NewProp_bHasComponentTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComponentTransformChanged;
	static void NewProp_bFullyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PDGAssetLink;
	static void NewProp_bIsPDGAssetLinkInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPDGAssetLinkInitialized;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefineMeshesTimer;
	static void NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoProxyMeshNextCookRequested;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeAfterNextCook_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeAfterNextCook;
	static void NewProp_bCachedIsPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedIsPreview;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastTickTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastLiveSyncPingTime;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ParameterPresetBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterPresetBuffer;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowPlayInEditorRefinement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayInEditorRefinement;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniAsset_DEPRECATED), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnParameterChange_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnParameterChange_MetaData), NewProp_bCookOnParameterChange_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bUploadTransformsToHoudiniEngine_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUploadTransformsToHoudiniEngine_MetaData), NewProp_bUploadTransformsToHoudiniEngine_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnTransformChange_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnTransformChange_MetaData), NewProp_bCookOnTransformChange_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCookOnAssetInputCook_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook = { "bCookOnAssetInputCook", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnAssetInputCook_MetaData), NewProp_bCookOnAssetInputCook_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOutputless_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless = { "bOutputless", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputless_MetaData), NewProp_bOutputless_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOutputTemplateGeos_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTemplateGeos_MetaData), NewProp_bOutputTemplateGeos_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bUseOutputNodes_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOutputNodes_MetaData), NewProp_bUseOutputNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, TemporaryCookFolder_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporaryCookFolder_MetaData), NewProp_TemporaryCookFolder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bSplitMeshSupport_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport = { "bSplitMeshSupport", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitMeshSupport_MetaData), NewProp_bSplitMeshSupport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshGenerationProperties_DEPRECATED), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshGenerationProperties_MetaData), NewProp_StaticMeshGenerationProperties_MetaData) }; // 2614411381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshBuildSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshBuildSettings_MetaData), NewProp_StaticMeshBuildSettings_MetaData) }; // 2569424419
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bOverrideGlobalProxyStaticMeshSettings_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData), NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshOverride_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshOverride_MetaData), NewProp_bEnableProxyStaticMeshOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ProxyMeshAutoRefineTimeoutSecondsOverride_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData), NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bGenerateMenuExpanded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded = { "bGenerateMenuExpanded", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateMenuExpanded_MetaData), NewProp_bGenerateMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bAssetOptionMenuExpanded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded = { "bAssetOptionMenuExpanded", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetOptionMenuExpanded_MetaData), NewProp_bAssetOptionMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHelpAndDebugMenuExpanded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded = { "bHelpAndDebugMenuExpanded", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHelpAndDebugMenuExpanded_MetaData), NewProp_bHelpAndDebugMenuExpanded_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniEngineBakeOption_DEPRECATED), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniEngineBakeOption_MetaData), NewProp_HoudiniEngineBakeOption_MetaData) }; // 2579090935
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRemoveOutputAfterBake_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake = { "bRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveOutputAfterBake_MetaData), NewProp_bRemoveOutputAfterBake_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRecenterBakedActors_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecenterBakedActors_MetaData), NewProp_bRecenterBakedActors_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bReplacePreviousBake_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake = { "bReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplacePreviousBake_MetaData), NewProp_bReplacePreviousBake_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ActorBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ActorBakeOption = { "ActorBakeOption", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ActorBakeOption_DEPRECATED), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorBakeOption_MetaData), NewProp_ActorBakeOption_MetaData) }; // 2532276571
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLandscapeUseTempLayers_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bLandscapeUseTempLayers_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLandscapeUseTempLayers = { "bLandscapeUseTempLayers", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLandscapeUseTempLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeUseTempLayers_MetaData), NewProp_bLandscapeUseTempLayers_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCurveEditing_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableCurveEditing_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCurveEditing = { "bEnableCurveEditing", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCurveEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCurveEditing_MetaData), NewProp_bEnableCurveEditing_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNeedToUpdateEditorProperties_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bNeedToUpdateEditorProperties_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNeedToUpdateEditorProperties = { "bNeedToUpdateEditorProperties", nullptr, (EPropertyFlags)0x0010000820202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNeedToUpdateEditorProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedToUpdateEditorProperties_MetaData), NewProp_bNeedToUpdateEditorProperties_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetId_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0020080020202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, NodeIdsToCook_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIdsToCook_MetaData), NewProp_NodeIdsToCook_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp = { "OutputNodeCookCounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0020080020202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, OutputNodeCookCounts_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNodeCookCounts_MetaData), NewProp_OutputNodeCookCounts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0124088000200008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DownstreamHoudiniAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownstreamHoudiniAssets_MetaData), NewProp_DownstreamHoudiniAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ComponentGUID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentGUID_MetaData), NewProp_ComponentGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiGUID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiGUID_MetaData), NewProp_HapiGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName = { "HapiAssetName", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiAssetName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiAssetName_MetaData), NewProp_HapiAssetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetState_DEPRECATED), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetState_MetaData), NewProp_AssetState_MetaData) }; // 1424350765
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult = { "AssetStateResult", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetStateResult_DEPRECATED), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetStateResult_MetaData), NewProp_AssetStateResult_MetaData) }; // 1324121041
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastComponentTransform = { "LastComponentTransform", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastComponentTransform_DEPRECATED), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastComponentTransform_MetaData), NewProp_LastComponentTransform_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, SubAssetIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAssetIndex_MetaData), NewProp_SubAssetIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetCookCount_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCookCount_MetaData), NewProp_AssetCookCount_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasBeenLoaded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenLoaded_MetaData), NewProp_bHasBeenLoaded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasBeenDuplicated_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenDuplicated_MetaData), NewProp_bHasBeenDuplicated_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bPendingDelete_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingDelete_MetaData), NewProp_bPendingDelete_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRecookRequested_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecookRequested_MetaData), NewProp_bRecookRequested_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bRebuildRequested_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildRequested_MetaData), NewProp_bRebuildRequested_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bEnableCooking_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCooking_MetaData), NewProp_bEnableCooking_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bForceNeedUpdate_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNeedUpdate_MetaData), NewProp_bForceNeedUpdate_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bLastCookSuccess_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastCookSuccess_MetaData), NewProp_bLastCookSuccess_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bParameterDefinitionUpdateNeeded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded = { "bParameterDefinitionUpdateNeeded", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameterDefinitionUpdateNeeded_MetaData), NewProp_bParameterDefinitionUpdateNeeded_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bBlueprintStructureModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified = { "bBlueprintStructureModified", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlueprintStructureModified_MetaData), NewProp_bBlueprintStructureModified_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bBlueprintModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified = { "bBlueprintModified", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlueprintModified_MetaData), NewProp_bBlueprintModified_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0106000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_Inner_MetaData), NewProp_Parameters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0124088020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Parameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0106000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Inner_MetaData), NewProp_Inputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0124088020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Inputs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0106000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_Inner_MetaData), NewProp_Outputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0124088020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Outputs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(0, nullptr) }; // 961134958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakedOutputs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputs_MetaData), NewProp_BakedOutputs_MetaData) }; // 961134958
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, UntrackedOutputs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UntrackedOutputs_MetaData), NewProp_UntrackedOutputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner = { "HandleComponents", nullptr, (EPropertyFlags)0x0104000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniHandleComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents = { "HandleComponents", nullptr, (EPropertyFlags)0x0124088020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HandleComponents_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleComponents_MetaData), NewProp_HandleComponents_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bHasComponentTransformChanged_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged = { "bHasComponentTransformChanged", nullptr, (EPropertyFlags)0x0020080020202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasComponentTransformChanged_MetaData), NewProp_bHasComponentTransformChanged_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bFullyLoaded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded = { "bFullyLoaded", nullptr, (EPropertyFlags)0x0020080020202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyLoaded_MetaData), NewProp_bFullyLoaded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink = { "PDGAssetLink", nullptr, (EPropertyFlags)0x0124080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, PDGAssetLink_DEPRECATED), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGAssetLink_MetaData), NewProp_PDGAssetLink_MetaData) };
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bIsPDGAssetLinkInitialized_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bIsPDGAssetLinkInitialized_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bIsPDGAssetLinkInitialized = { "bIsPDGAssetLinkInitialized", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bIsPDGAssetLinkInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPDGAssetLinkInitialized_MetaData), NewProp_bIsPDGAssetLinkInitialized_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer = { "RefineMeshesTimer", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, RefineMeshesTimer_DEPRECATED), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineMeshesTimer_MetaData), NewProp_RefineMeshesTimer_MetaData) }; // 3834150579
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bNoProxyMeshNextCookRequested_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested = { "bNoProxyMeshNextCookRequested", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoProxyMeshNextCookRequested_MetaData), NewProp_bNoProxyMeshNextCookRequested_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook = { "BakeAfterNextCook", nullptr, (EPropertyFlags)0x0020080020200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeAfterNextCook_DEPRECATED), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeAfterNextCook_MetaData), NewProp_BakeAfterNextCook_MetaData) }; // 2968154671
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bCachedIsPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview = { "bCachedIsPreview", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedIsPreview_MetaData), NewProp_bCachedIsPreview_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime = { "LastTickTime", nullptr, (EPropertyFlags)0x0020080020002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastTickTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTickTime_MetaData), NewProp_LastTickTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastLiveSyncPingTime = { "LastLiveSyncPingTime", nullptr, (EPropertyFlags)0x0020080020002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastLiveSyncPingTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLiveSyncPingTime_MetaData), NewProp_LastLiveSyncPingTime_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ParameterPresetBuffer_Inner = { "ParameterPresetBuffer", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ParameterPresetBuffer = { "ParameterPresetBuffer", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ParameterPresetBuffer_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterPresetBuffer_MetaData), NewProp_ParameterPresetBuffer_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAllowPlayInEditorRefinement_SetBit(void* Obj)
{
	((UHoudiniAssetComponent*)Obj)->bAllowPlayInEditorRefinement_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAllowPlayInEditorRefinement = { "bAllowPlayInEditorRefinement", nullptr, (EPropertyFlags)0x0020080820202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAllowPlayInEditorRefinement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPlayInEditorRefinement_MetaData), NewProp_bAllowPlayInEditorRefinement_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bSplitMeshSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ActorBakeOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ActorBakeOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLandscapeUseTempLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCurveEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNeedToUpdateEditorProperties,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bIsPDGAssetLinkInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeAfterNextCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastLiveSyncPingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ParameterPresetBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ParameterPresetBuffer,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAllowPlayInEditorRefinement,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister, (int32)VTABLE_OFFSET(UHoudiniAssetComponent, IHoudiniAssetStateEvents), false },  // 1232922661
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams = {
	&UHoudiniAssetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton, Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAssetComponent)
// ********** End Class UHoudiniAssetComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetComponent, UHoudiniAssetComponent::StaticClass, TEXT("UHoudiniAssetComponent"), &Z_Registration_Info_UClass_UHoudiniAssetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetComponent), 3987490399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h__Script_HoudiniEngineRuntime_4159740922(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
