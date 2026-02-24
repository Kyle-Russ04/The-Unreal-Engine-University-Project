// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniInstanceTranslator.h"
#include "HoudiniGenericAttribute.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniMaterialTranslator.h"
#include "HoudiniOutput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniInstanceTranslator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancer();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancerPartData();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancerSettings();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHoudiniInstancerSettings *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings;
class UScriptStruct* FHoudiniInstancerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancerSettings, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorClassName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeOutlinerFolder_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFoliage_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceHISM_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform relative to the parent (HAC) Transform.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform relative to the parent (HAC) Transform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data Layers which should be applied (during Baking only).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Layers which should be applied (during Baking only)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HLOD Layers which should be applied (during Baking only).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HLOD Layers which should be applied (during Baking only)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeOutlinerFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_bIsFoliage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFoliage;
	static void NewProp_bForceHISM_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHISM;
	static void NewProp_bForceInstancer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInstancer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, LevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelPath_MetaData), NewProp_LevelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeActorName = { "BakeActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, BakeActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeActorName_MetaData), NewProp_BakeActorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeActorClassName = { "BakeActorClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, BakeActorClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeActorClassName_MetaData), NewProp_BakeActorClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeOutlinerFolder = { "BakeOutlinerFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, BakeOutlinerFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeOutlinerFolder_MetaData), NewProp_BakeOutlinerFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, BakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bIsFoliage_SetBit(void* Obj)
{
	((FHoudiniInstancerSettings*)Obj)->bIsFoliage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bIsFoliage = { "bIsFoliage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancerSettings), &Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bIsFoliage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFoliage_MetaData), NewProp_bIsFoliage_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceHISM_SetBit(void* Obj)
{
	((FHoudiniInstancerSettings*)Obj)->bForceHISM = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceHISM = { "bForceHISM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancerSettings), &Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceHISM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceHISM_MetaData), NewProp_bForceHISM_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceInstancer_SetBit(void* Obj)
{
	((FHoudiniInstancerSettings*)Obj)->bForceInstancer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceInstancer = { "bForceInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancerSettings), &Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceInstancer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceInstancer_MetaData), NewProp_bForceInstancer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_ComponentRelativeTransform = { "ComponentRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, ComponentRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRelativeTransform_MetaData), NewProp_ComponentRelativeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniDataLayer, METADATA_PARAMS(0, nullptr) }; // 1363605034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 1363605034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_HLODLayers_Inner = { "HLODLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniHLODLayer, METADATA_PARAMS(0, nullptr) }; // 3567328343
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerSettings, HLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayers_MetaData), NewProp_HLODLayers_MetaData) }; // 3567328343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_LevelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeActorClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeOutlinerFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bIsFoliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceHISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_bForceInstancer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_ComponentRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_HLODLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewProp_HLODLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniInstancerSettings",
	Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::PropPointers),
	sizeof(FHoudiniInstancerSettings),
	alignof(FHoudiniInstancerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniInstancerSettings *******************************************

// ********** Begin ScriptStruct FHoudiniInstancer *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniInstancer;
class UScriptStruct* FHoudiniInstancer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniInstancer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancer"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniInstancer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomFloats_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFloats_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeIndices;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomFloats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomFloats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomFloats;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, ObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_AttributeIndices_Inner = { "AttributeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_AttributeIndices = { "AttributeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, AttributeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIndices_MetaData), NewProp_AttributeIndices_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_SplitName = { "SplitName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, SplitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitName_MetaData), NewProp_SplitName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, Settings), Z_Construct_UScriptStruct_FHoudiniInstancerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2915471572
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_NumCustomFloats = { "NumCustomFloats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, NumCustomFloats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomFloats_MetaData), NewProp_NumCustomFloats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_CustomFloats_Inner = { "CustomFloats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_CustomFloats = { "CustomFloats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancer, CustomFloats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFloats_MetaData), NewProp_CustomFloats_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FHoudiniInstancer*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancer), &Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_ObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_AttributeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_AttributeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_SplitName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_NumCustomFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_CustomFloats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_CustomFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniInstancer",
	Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::PropPointers),
	sizeof(FHoudiniInstancer),
	alignof(FHoudiniInstancer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancer()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniInstancer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancer.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniInstancer ***************************************************

// ********** Begin ScriptStruct FHoudiniInstancerPartData *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData;
class UScriptStruct* FHoudiniInstancerPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancerPartData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancerPartData"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoPartObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instancers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of material attributes\n// If multiple slots are defined, we store all the different attributes values in a flat array\n// Such that the size of MaterialAttributes is NumberOfAttributes * NumberOfMaterialSlots\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of material attributes\nIf multiple slots are defined, we store all the different attributes values in a flat array\nSuch that the size of MaterialAttributes is NumberOfAttributes * NumberOfMaterialSlots" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoPartObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instancers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instancers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllPropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPropertyAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancerPartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_GeoPartObject = { "GeoPartObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, GeoPartObject), Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoPartObject_MetaData), NewProp_GeoPartObject_MetaData) }; // 1535284358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_Instancers_Inner = { "Instancers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniInstancer, METADATA_PARAMS(0, nullptr) }; // 925999980
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_Instancers = { "Instancers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, Instancers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instancers_MetaData), NewProp_Instancers_MetaData) }; // 925999980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTransforms_MetaData), NewProp_InstanceTransforms_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_SplitAttributeName = { "SplitAttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, SplitAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAttributeName_MetaData), NewProp_SplitAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_AllPropertyAttributes_Inner = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 1070630827
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_AllPropertyAttributes = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, AllPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPropertyAttributes_MetaData), NewProp_AllPropertyAttributes_MetaData) }; // 1070630827
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_MaterialAttributes_Inner = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 2913755300
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancerPartData, MaterialAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) }; // 2913755300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_GeoPartObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_Instancers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_Instancers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_InstanceTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_InstanceTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_SplitAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_AllPropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_AllPropertyAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_MaterialAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewProp_MaterialAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniInstancerPartData",
	Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::PropPointers),
	sizeof(FHoudiniInstancerPartData),
	alignof(FHoudiniInstancerPartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancerPartData()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniInstancerPartData *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h__Script_HoudiniEngine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniInstancerSettings::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancerSettings_Statics::NewStructOps, TEXT("HoudiniInstancerSettings"), &Z_Registration_Info_UScriptStruct_FHoudiniInstancerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancerSettings), 2915471572U) },
		{ FHoudiniInstancer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancer_Statics::NewStructOps, TEXT("HoudiniInstancer"), &Z_Registration_Info_UScriptStruct_FHoudiniInstancer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancer), 925999980U) },
		{ FHoudiniInstancerPartData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancerPartData_Statics::NewStructOps, TEXT("HoudiniInstancerPartData"), &Z_Registration_Info_UScriptStruct_FHoudiniInstancerPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancerPartData), 1145707898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h__Script_HoudiniEngine_2091363424(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h__Script_HoudiniEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h__Script_HoudiniEngine_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
