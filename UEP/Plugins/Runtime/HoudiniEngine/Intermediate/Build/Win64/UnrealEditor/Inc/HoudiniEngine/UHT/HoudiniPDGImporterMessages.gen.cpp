// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPDGImporterMessages.h"
#include "Engine/EngineTypes.h"
#include "HoudiniGenericAttribute.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniInstanceTranslator.h"
#include "HoudiniOutput.h"
#include "HoudiniPackageParams.h"
#include "HoudiniRuntimeSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPDGImporterMessages() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancerPartData();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHoudiniPDGImportBGEODiscoverMessage ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage;
class UScriptStruct* FHoudiniPDGImportBGEODiscoverMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEODiscoverMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Message used to find/discover running commandlets\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message used to find/discover running commandlets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandletGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The GUID of the commandlet we are looking for\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GUID of the commandlet we are looking for" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommandletGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEODiscoverMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid = { "CommandletGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEODiscoverMessage, CommandletGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandletGuid_MetaData), NewProp_CommandletGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniPDGImportBGEODiscoverMessage",
	Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers),
	sizeof(FHoudiniPDGImportBGEODiscoverMessage),
	alignof(FHoudiniPDGImportBGEODiscoverMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniPDGImportBGEODiscoverMessage ********************************

// ********** Begin ScriptStruct FHoudiniPDGImportBGEOMessage **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage;
class UScriptStruct* FHoudiniPDGImportBGEOMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BGEO file path\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BGEO file path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PDG work item name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PDG work item name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TOP/PDG info\n// TOP node ID\n// HAPI_NodeId TOPNodeId;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TOP/PDG info\nTOP node ID\nHAPI_NodeId TOPNodeId;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Work item id\n// HAPI_PDG_WorkItemId WorkItemId;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Work item id\nHAPI_PDG_WorkItemId WorkItemId;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageParams_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Package params for the asset \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package params for the asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings used during static mesh generation\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings used during static mesh generation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBuildSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static mesh build settings used during mesh builds\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh build settings used during mesh builds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TOPNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackageParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBuildSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId = { "TOPNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, TOPNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOPNodeId_MetaData), NewProp_TOPNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId = { "WorkItemId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, WorkItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemId_MetaData), NewProp_WorkItemId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams = { "PackageParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, PackageParams), Z_Construct_UScriptStruct_FHoudiniPackageParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageParams_MetaData), NewProp_PackageParams_MetaData) }; // 126944019
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshGenerationProperties_MetaData), NewProp_StaticMeshGenerationProperties_MetaData) }; // 2614411381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings = { "MeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, MeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBuildSettings_MetaData), NewProp_MeshBuildSettings_MetaData) }; // 2569424419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniPDGImportBGEOMessage",
	Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers),
	sizeof(FHoudiniPDGImportBGEOMessage),
	alignof(FHoudiniPDGImportBGEOMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniPDGImportBGEOMessage ****************************************

// ********** Begin Enum EHoudiniPDGImportBGEOResult ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult;
static UEnum* EHoudiniPDGImportBGEOResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniPDGImportBGEOResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>()
{
	return EHoudiniPDGImportBGEOResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HIBPR_MAX.Name", "EHoudiniPDGImportBGEOResult::HIBPR_MAX" },
		{ "HPIBR_Failed.Comment", "// Create uassets from the bgeo completely failed.\n" },
		{ "HPIBR_Failed.DisplayName", "Failed" },
		{ "HPIBR_Failed.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Failed" },
		{ "HPIBR_Failed.ToolTip", "Create uassets from the bgeo completely failed." },
		{ "HPIBR_PartialSuccess.Comment", "// Some uassets were created, but there were unsupported objects in the bgeo as well\n" },
		{ "HPIBR_PartialSuccess.DisplayName", "Partial Success" },
		{ "HPIBR_PartialSuccess.Name", "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess" },
		{ "HPIBR_PartialSuccess.ToolTip", "Some uassets were created, but there were unsupported objects in the bgeo as well" },
		{ "HPIBR_Success.Comment", "// Successfully created uassets for all content in the bgeo\n" },
		{ "HPIBR_Success.DisplayName", "Success" },
		{ "HPIBR_Success.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Success" },
		{ "HPIBR_Success.ToolTip", "Successfully created uassets for all content in the bgeo" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Failed", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Failed },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Success", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Success },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess", (int64)EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess },
		{ "EHoudiniPDGImportBGEOResult::HIBPR_MAX", (int64)EHoudiniPDGImportBGEOResult::HIBPR_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniPDGImportBGEOResult",
	"EHoudiniPDGImportBGEOResult",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton;
}
// ********** End Enum EHoudiniPDGImportBGEOResult *************************************************

// ********** Begin ScriptStruct FHoudiniGenericAttributes *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes;
class UScriptStruct* FHoudiniGenericAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributes, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniGenericAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 1070630827
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttributes, PropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyAttributes_MetaData), NewProp_PropertyAttributes_MetaData) }; // 1070630827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniGenericAttributes",
	Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers),
	sizeof(FHoudiniGenericAttributes),
	alignof(FHoudiniGenericAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniGenericAttributes *******************************************

// ********** Begin ScriptStruct FHoudiniPDGImportNodeOutputObject *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject;
class UScriptStruct* FHoudiniPDGImportNodeOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenericAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutputObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, Identifier), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) }; // 70378817
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes = { "GenericAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, GenericAttributes), Z_Construct_UScriptStruct_FHoudiniGenericAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericAttributes_MetaData), NewProp_GenericAttributes_MetaData) }; // 947339531
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAttributes_MetaData), NewProp_CachedAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniPDGImportNodeOutputObject",
	Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers),
	sizeof(FHoudiniPDGImportNodeOutputObject),
	alignof(FHoudiniPDGImportNodeOutputObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniPDGImportNodeOutputObject ***********************************

// ********** Begin ScriptStruct FHoudiniPDGImportNodeOutput ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput;
class UScriptStruct* FHoudiniPDGImportNodeOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutput"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputPartData_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputPartData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedOutputPartData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(0, nullptr) }; // 1535284358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniGeoPartObjects_MetaData), NewProp_HoudiniGeoPartObjects_MetaData) }; // 1535284358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, METADATA_PARAMS(0, nullptr) }; // 3028115102
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, OutputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObjects_MetaData), NewProp_OutputObjects_MetaData) }; // 3028115102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniInstancerPartData, METADATA_PARAMS(0, nullptr) }; // 1145707898
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, InstancedOutputPartData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedOutputPartData_MetaData), NewProp_InstancedOutputPartData_MetaData) }; // 1145707898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniPDGImportNodeOutput",
	Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers),
	sizeof(FHoudiniPDGImportNodeOutput),
	alignof(FHoudiniPDGImportNodeOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniPDGImportNodeOutput *****************************************

// ********** Begin ScriptStruct FHoudiniPDGImportBGEOResultMessage ********************************
static_assert(std::is_polymorphic<FHoudiniPDGImportBGEOResultMessage>() == std::is_polymorphic<FHoudiniPDGImportBGEOMessage>(), "USTRUCT FHoudiniPDGImportBGEOResultMessage cannot be polymorphic unless super FHoudiniPDGImportBGEOMessage is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage;
class UScriptStruct* FHoudiniPDGImportBGEOResultMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOResultMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Result of the bgeo import -> uassets\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of the bgeo import -> uassets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOResultMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, ImportResult), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportResult_MetaData), NewProp_ImportResult_MetaData) }; // 2719803260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, METADATA_PARAMS(0, nullptr) }; // 2665123347
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 2665123347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage,
	&NewStructOps,
	"HoudiniPDGImportBGEOResultMessage",
	Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers),
	sizeof(FHoudiniPDGImportBGEOResultMessage),
	alignof(FHoudiniPDGImportBGEOResultMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage.InnerSingleton;
}
// ********** End ScriptStruct FHoudiniPDGImportBGEOResultMessage **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPDGImportBGEOResult_StaticEnum, TEXT("EHoudiniPDGImportBGEOResult"), &Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2719803260U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniPDGImportBGEODiscoverMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEODiscoverMessage"), &Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEODiscoverMessage), 1529858822U) },
		{ FHoudiniPDGImportBGEOMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOMessage"), &Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOMessage), 3250383229U) },
		{ FHoudiniGenericAttributes::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps, TEXT("HoudiniGenericAttributes"), &Z_Registration_Info_UScriptStruct_FHoudiniGenericAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributes), 947339531U) },
		{ FHoudiniPDGImportNodeOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutputObject"), &Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutputObject), 3028115102U) },
		{ FHoudiniPDGImportNodeOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutput"), &Z_Registration_Info_UScriptStruct_FHoudiniPDGImportNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutput), 2665123347U) },
		{ FHoudiniPDGImportBGEOResultMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOResultMessage"), &Z_Registration_Info_UScriptStruct_FHoudiniPDGImportBGEOResultMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOResultMessage), 1057293875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_904893277(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h__Script_HoudiniEngine_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
