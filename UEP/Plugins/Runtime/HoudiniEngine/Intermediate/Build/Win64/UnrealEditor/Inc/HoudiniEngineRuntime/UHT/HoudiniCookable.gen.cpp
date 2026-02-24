// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniCookable.h"
#include "Engine/EngineTypes.h"
#include "Engine/TimerHandle.h"
#include "HoudiniRuntimeSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniCookable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableBakingData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableBakingData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableComponentData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableComponentData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableHoudiniAssetData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableHoudiniAssetData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableInputData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableInputData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableOutputData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableOutputData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableParameterData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableParameterData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookablePDGData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookablePDGData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableProxyData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UCookableProxyData_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniCookable();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniCookable_NoRegister();
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
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCookableHoudiniAssetData ************************************************
void UCookableHoudiniAssetData::StaticRegisterNativesUCookableHoudiniAssetData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableHoudiniAssetData;
UClass* UCookableHoudiniAssetData::GetPrivateStaticClass()
{
	using TClass = UCookableHoudiniAssetData;
	if (!Z_Registration_Info_UClass_UCookableHoudiniAssetData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableHoudiniAssetData"),
			Z_Registration_Info_UClass_UCookableHoudiniAssetData.InnerSingleton,
			StaticRegisterNativesUCookableHoudiniAssetData,
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
	return Z_Registration_Info_UClass_UCookableHoudiniAssetData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableHoudiniAssetData_NoRegister()
{
	return UCookableHoudiniAssetData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableHoudiniAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "Category", "HoudiniAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Houdini Asset associated with this component.\x09\x09\x09\n// BlueprintSetter = SetHoudiniAsset, BlueprintReadWrite, )\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Asset associated with this component.\nBlueprintSetter = SetHoudiniAsset, BlueprintReadWrite, )" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subasset index\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subasset index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiAssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The asset name of the selected asset inside the asset library\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset name of the selected asset inside the asset library" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HapiAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableHoudiniAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableHoudiniAssetData, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableHoudiniAssetData, SubAssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAssetIndex_MetaData), NewProp_SubAssetIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_HapiAssetName = { "HapiAssetName", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableHoudiniAssetData, HapiAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiAssetName_MetaData), NewProp_HapiAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableHoudiniAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_SubAssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableHoudiniAssetData_Statics::NewProp_HapiAssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableHoudiniAssetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableHoudiniAssetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableHoudiniAssetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableHoudiniAssetData_Statics::ClassParams = {
	&UCookableHoudiniAssetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableHoudiniAssetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableHoudiniAssetData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableHoudiniAssetData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableHoudiniAssetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableHoudiniAssetData()
{
	if (!Z_Registration_Info_UClass_UCookableHoudiniAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableHoudiniAssetData.OuterSingleton, Z_Construct_UClass_UCookableHoudiniAssetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableHoudiniAssetData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableHoudiniAssetData);
UCookableHoudiniAssetData::~UCookableHoudiniAssetData() {}
// ********** End Class UCookableHoudiniAssetData **************************************************

// ********** Begin Class UCookableParameterData ***************************************************
void UCookableParameterData::StaticRegisterNativesUCookableParameterData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableParameterData;
UClass* UCookableParameterData::GetPrivateStaticClass()
{
	using TClass = UCookableParameterData;
	if (!Z_Registration_Info_UClass_UCookableParameterData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableParameterData"),
			Z_Registration_Info_UClass_UCookableParameterData.InnerSingleton,
			StaticRegisterNativesUCookableParameterData,
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
	return Z_Registration_Info_UClass_UCookableParameterData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableParameterData_NoRegister()
{
	return UCookableParameterData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableParameterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterPresetBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store the current state of parameters \n// This allows fast - batch setting of parameters (upon rebuild/load)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store the current state of parameters\nThis allows fast - batch setting of parameters (upon rebuild/load)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically cook when a parameter is changed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically cook when a parameter is changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameterDefinitionUpdateNeeded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that the parameter state (excluding values) on the HAC and the instantiated node needs to be synced.\n// The most common use for this would be a newly instantiated HDA that has only a default parameter interface\n// from its asset definition, and needs to sync pre-cook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that the parameter state (excluding values) on the HAC and the instantiated node needs to be synced.\nThe most common use for this would be a newly instantiated HDA that has only a default parameter interface\nfrom its asset definition, and needs to sync pre-cook." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ParameterPresetBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterPresetBuffer;
	static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
	static void NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterDefinitionUpdateNeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableParameterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_Inner_MetaData), NewProp_Parameters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableParameterData, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_ParameterPresetBuffer_Inner = { "ParameterPresetBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_ParameterPresetBuffer = { "ParameterPresetBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableParameterData, ParameterPresetBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterPresetBuffer_MetaData), NewProp_ParameterPresetBuffer_MetaData) };
void Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
{
	((UCookableParameterData*)Obj)->bCookOnParameterChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableParameterData), &Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnParameterChange_MetaData), NewProp_bCookOnParameterChange_MetaData) };
void Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj)
{
	((UCookableParameterData*)Obj)->bParameterDefinitionUpdateNeeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bParameterDefinitionUpdateNeeded = { "bParameterDefinitionUpdateNeeded", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableParameterData), &Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameterDefinitionUpdateNeeded_MetaData), NewProp_bParameterDefinitionUpdateNeeded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableParameterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_ParameterPresetBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_ParameterPresetBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bCookOnParameterChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableParameterData_Statics::NewProp_bParameterDefinitionUpdateNeeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableParameterData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableParameterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableParameterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableParameterData_Statics::ClassParams = {
	&UCookableParameterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableParameterData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableParameterData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableParameterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableParameterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableParameterData()
{
	if (!Z_Registration_Info_UClass_UCookableParameterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableParameterData.OuterSingleton, Z_Construct_UClass_UCookableParameterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableParameterData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableParameterData);
UCookableParameterData::~UCookableParameterData() {}
// ********** End Class UCookableParameterData *****************************************************

// ********** Begin Class UCookableInputData *******************************************************
void UCookableInputData::StaticRegisterNativesUCookableInputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableInputData;
UClass* UCookableInputData::GetPrivateStaticClass()
{
	using TClass = UCookableInputData;
	if (!Z_Registration_Info_UClass_UCookableInputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableInputData"),
			Z_Registration_Info_UClass_UCookableInputData.InnerSingleton,
			StaticRegisterNativesUCookableInputData,
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
	return Z_Registration_Info_UClass_UCookableInputData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableInputData_NoRegister()
{
	return UCookableInputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store data for a cookable's inputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store data for a cookable's inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store data for a cookable's inputs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store data for a cookable's inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnInputChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically cook when an input is changed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically cook when an input is changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCookableInputCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bCookOnParameterChange\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bCookOnParameterChange" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamCookables_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Cookable Move to output data?\n// List of dependent downstream Cookables that have us as an asset input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Cookable Move to output data?\nList of dependent downstream Cookables that have us as an asset input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static void NewProp_bCookOnInputChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnInputChange;
	static void NewProp_bCookOnCookableInputCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCookableInputCook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownstreamCookables_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DownstreamCookables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableInputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Inner_MetaData), NewProp_Inputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableInputData, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
void Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnInputChange_SetBit(void* Obj)
{
	((UCookableInputData*)Obj)->bCookOnInputChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnInputChange = { "bCookOnInputChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableInputData), &Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnInputChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnInputChange_MetaData), NewProp_bCookOnInputChange_MetaData) };
void Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnCookableInputCook_SetBit(void* Obj)
{
	((UCookableInputData*)Obj)->bCookOnCookableInputCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnCookableInputCook = { "bCookOnCookableInputCook", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableInputData), &Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnCookableInputCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnCookableInputCook_MetaData), NewProp_bCookOnCookableInputCook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_DownstreamCookables_ElementProp = { "DownstreamCookables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniCookable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCookableInputData_Statics::NewProp_DownstreamCookables = { "DownstreamCookables", nullptr, (EPropertyFlags)0x0114000000200000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableInputData, DownstreamCookables), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownstreamCookables_MetaData), NewProp_DownstreamCookables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnInputChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_bCookOnCookableInputCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_DownstreamCookables_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableInputData_Statics::NewProp_DownstreamCookables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableInputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableInputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableInputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableInputData_Statics::ClassParams = {
	&UCookableInputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableInputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableInputData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableInputData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableInputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableInputData()
{
	if (!Z_Registration_Info_UClass_UCookableInputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableInputData.OuterSingleton, Z_Construct_UClass_UCookableInputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableInputData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableInputData);
UCookableInputData::~UCookableInputData() {}
// ********** End Class UCookableInputData *********************************************************

// ********** Begin Class UCookableOutputData ******************************************************
void UCookableOutputData::StaticRegisterNativesUCookableOutputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableOutputData;
UClass* UCookableOutputData::GetPrivateStaticClass()
{
	using TClass = UCookableOutputData;
	if (!Z_Registration_Info_UClass_UCookableOutputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableOutputData"),
			Z_Registration_Info_UClass_UCookableOutputData.InnerSingleton,
			StaticRegisterNativesUCookableOutputData,
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
	return Z_Registration_Info_UClass_UCookableOutputData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableOutputData_NoRegister()
{
	return UCookableOutputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableOutputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UntrackedOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any actors that aren't explicitly tracked by output objects\n// should be registered here so that they can be cleaned up.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any actors that aren't explicitly tracked by output objects\nshould be registered here so that they can be cleaned up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temporary cook folder\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporary cook folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputless_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabling this will prevent producing any output after cooking.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this will prevent producing any output after cooking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSceneComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabling this allows scene components to be produced. Used to stop scene components\n// being generated for meshes. Possibly other types in the future.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this allows scene components to be produced. Used to stop scene components\nbeing generated for meshes. Possibly other types in the future." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabling this will allow outputing the asset's templated geos\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this will allow outputing the asset's templated geos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabling this will allow outputing using output nodes\n// Disabling it will either fall back to display flag node (legacy workflow)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this will allow outputing using output nodes\nDisabling it will either fall back to display flag node (legacy workflow)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshSupport_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to support multiple mesh outputs on one HDA output. This is currently in Alpha  testing.\n" },
#endif
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to support multiple mesh outputs on one HDA output. This is currently in Alpha  testing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCurveEditing_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (ShowOnlyInnerProperties)*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ShowOnlyInnerProperties)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Build Settings to be used when generating the Static Meshes for this Houdini Asset\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build Settings to be used when generating the Static Meshes for this Houdini Asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUseTempLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UntrackedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UntrackedOutputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemporaryCookFolder;
	static void NewProp_bOutputless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputless;
	static void NewProp_bCreateSceneComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSceneComponents;
	static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
	static void NewProp_bUseOutputNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
	static void NewProp_bSplitMeshSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshSupport;
	static void NewProp_bEnableCurveEditing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCurveEditing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
	static void NewProp_bLandscapeUseTempLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUseTempLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableOutputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_Inner_MetaData), NewProp_Outputs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableOutputData, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_UntrackedOutputs_Inner = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_UntrackedOutputs = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableOutputData, UntrackedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UntrackedOutputs_MetaData), NewProp_UntrackedOutputs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableOutputData, TemporaryCookFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporaryCookFolder_MetaData), NewProp_TemporaryCookFolder_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputless_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bOutputless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputless = { "bOutputless", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputless_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputless_MetaData), NewProp_bOutputless_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bCreateSceneComponents_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bCreateSceneComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bCreateSceneComponents = { "bCreateSceneComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bCreateSceneComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateSceneComponents_MetaData), NewProp_bCreateSceneComponents_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bOutputTemplateGeos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTemplateGeos_MetaData), NewProp_bOutputTemplateGeos_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bUseOutputNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOutputNodes_MetaData), NewProp_bUseOutputNodes_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bSplitMeshSupport_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bSplitMeshSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bSplitMeshSupport = { "bSplitMeshSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bSplitMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitMeshSupport_MetaData), NewProp_bSplitMeshSupport_MetaData) };
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bEnableCurveEditing_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bEnableCurveEditing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bEnableCurveEditing = { "bEnableCurveEditing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bEnableCurveEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCurveEditing_MetaData), NewProp_bEnableCurveEditing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableOutputData, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshGenerationProperties_MetaData), NewProp_StaticMeshGenerationProperties_MetaData) }; // 2614411381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableOutputData, StaticMeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshBuildSettings_MetaData), NewProp_StaticMeshBuildSettings_MetaData) }; // 2569424419
void Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bLandscapeUseTempLayers_SetBit(void* Obj)
{
	((UCookableOutputData*)Obj)->bLandscapeUseTempLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bLandscapeUseTempLayers = { "bLandscapeUseTempLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableOutputData), &Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bLandscapeUseTempLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeUseTempLayers_MetaData), NewProp_bLandscapeUseTempLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_UntrackedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_UntrackedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_TemporaryCookFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputless,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bCreateSceneComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bOutputTemplateGeos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bUseOutputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bSplitMeshSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bEnableCurveEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_StaticMeshGenerationProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_StaticMeshBuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableOutputData_Statics::NewProp_bLandscapeUseTempLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableOutputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableOutputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableOutputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableOutputData_Statics::ClassParams = {
	&UCookableOutputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableOutputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableOutputData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableOutputData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableOutputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableOutputData()
{
	if (!Z_Registration_Info_UClass_UCookableOutputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableOutputData.OuterSingleton, Z_Construct_UClass_UCookableOutputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableOutputData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableOutputData);
UCookableOutputData::~UCookableOutputData() {}
// ********** End Class UCookableOutputData ********************************************************

// ********** Begin Class UCookableBakingData ******************************************************
void UCookableBakingData::StaticRegisterNativesUCookableBakingData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableBakingData;
UClass* UCookableBakingData::GetPrivateStaticClass()
{
	using TClass = UCookableBakingData;
	if (!Z_Registration_Info_UClass_UCookableBakingData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableBakingData"),
			Z_Registration_Info_UClass_UCookableBakingData.InnerSingleton,
			StaticRegisterNativesUCookableBakingData,
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
	return Z_Registration_Info_UClass_UCookableBakingData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableBakingData_NoRegister()
{
	return UCookableBakingData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableBakingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake Options\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake Options" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Folder used for baking this asset's outputs (unless set by prim/detail attribute on the output). Falls back to\n// the default from the plugin settings if not set.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Folder used for baking this asset's outputs (unless set by prim/detail attribute on the output). Falls back to\nthe default from the plugin settings if not set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeAfterNextCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, bake the asset after its next cook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, bake the asset after its next cook." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOutputAfterBake_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, then after a successful bake, outputs will be cleared and removed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then after a successful bake, outputs will be cleared and removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, recenter baked actors to their bounding box center after bake\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, recenter baked actors to their bounding box center after bake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousBake_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, replace the previously baked output (if any) instead of creating new objects\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, replace the previously baked output (if any) instead of creating new objects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorBakeOption_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeAfterNextCook_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeAfterNextCook;
	static void NewProp_bRemoveOutputAfterBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOutputAfterBake;
	static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
	static void NewProp_bReplacePreviousBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousBake;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBakeOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBakeOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableBakingData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableBakingData, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniEngineBakeOption_MetaData), NewProp_HoudiniEngineBakeOption_MetaData) }; // 2579090935
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableBakingData, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeAfterNextCook_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeAfterNextCook = { "BakeAfterNextCook", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableBakingData, BakeAfterNextCook), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniBakeAfterNextCook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeAfterNextCook_MetaData), NewProp_BakeAfterNextCook_MetaData) }; // 2968154671
void Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRemoveOutputAfterBake_SetBit(void* Obj)
{
	((UCookableBakingData*)Obj)->bRemoveOutputAfterBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRemoveOutputAfterBake = { "bRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableBakingData), &Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRemoveOutputAfterBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveOutputAfterBake_MetaData), NewProp_bRemoveOutputAfterBake_MetaData) };
void Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
{
	((UCookableBakingData*)Obj)->bRecenterBakedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableBakingData), &Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecenterBakedActors_MetaData), NewProp_bRecenterBakedActors_MetaData) };
void Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bReplacePreviousBake_SetBit(void* Obj)
{
	((UCookableBakingData*)Obj)->bReplacePreviousBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bReplacePreviousBake = { "bReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableBakingData), &Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bReplacePreviousBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplacePreviousBake_MetaData), NewProp_bReplacePreviousBake_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_ActorBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookableBakingData_Statics::NewProp_ActorBakeOption = { "ActorBakeOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableBakingData, ActorBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorBakeOption_MetaData), NewProp_ActorBakeOption_MetaData) }; // 2532276571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableBakingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_HoudiniEngineBakeOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeAfterNextCook_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_BakeAfterNextCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRemoveOutputAfterBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bRecenterBakedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_bReplacePreviousBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_ActorBakeOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableBakingData_Statics::NewProp_ActorBakeOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableBakingData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableBakingData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableBakingData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableBakingData_Statics::ClassParams = {
	&UCookableBakingData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableBakingData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableBakingData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableBakingData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableBakingData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableBakingData()
{
	if (!Z_Registration_Info_UClass_UCookableBakingData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableBakingData.OuterSingleton, Z_Construct_UClass_UCookableBakingData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableBakingData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableBakingData);
UCookableBakingData::~UCookableBakingData() {}
// ********** End Class UCookableBakingData ********************************************************

// ********** Begin Class UCookableProxyData *******************************************************
void UCookableProxyData::StaticRegisterNativesUCookableProxyData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableProxyData;
UClass* UCookableProxyData::GetPrivateStaticClass()
{
	using TClass = UCookableProxyData;
	if (!Z_Registration_Info_UClass_UCookableProxyData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableProxyData"),
			Z_Registration_Info_UClass_UCookableProxyData.InnerSingleton,
			StaticRegisterNativesUCookableProxyData,
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
	return Z_Registration_Info_UClass_UCookableProxyData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableProxyData_NoRegister()
{
	return UCookableProxyData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableProxyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoProxyMeshNextCookRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, don't build a proxy mesh next cook (regardless of global or override settings),\n// instead build the UStaticMesh directly (if applicable for the output types).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, don't build a proxy mesh next cook (regardless of global or override settings),\ninstead build the UStaticMesh directly (if applicable for the output types)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (DisplayAfter = \"StaticMeshGenerationProperties\")*/" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (DisplayAfter = \"StaticMeshGenerationProperties\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For StaticMesh outputs: should a fast proxy be created first?\n" },
#endif
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For StaticMesh outputs: should a fast proxy be created first?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
#endif
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride && bEnableProxyStaticMeshRefinementByTimerOverride" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before the map is saved\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before the map is saved" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayInEditorRefinement_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineMeshesTimer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer that is used to trigger creation of UStaticMesh for all mesh outputs\n// that still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\n// at the end of the PostCook.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer that is used to trigger creation of UStaticMesh for all mesh outputs\nthat still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\nat the end of the PostCook." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoProxyMeshNextCookRequested;
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
	static void NewProp_bAllowPlayInEditorRefinement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayInEditorRefinement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefineMeshesTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableProxyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bNoProxyMeshNextCookRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bNoProxyMeshNextCookRequested = { "bNoProxyMeshNextCookRequested", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoProxyMeshNextCookRequested_MetaData), NewProp_bNoProxyMeshNextCookRequested_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bOverrideGlobalProxyStaticMeshSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData), NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bEnableProxyStaticMeshOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshOverride_MetaData), NewProp_bEnableProxyStaticMeshOverride_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableProxyData, ProxyMeshAutoRefineTimeoutSecondsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData), NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData), NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData) };
void Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bAllowPlayInEditorRefinement_SetBit(void* Obj)
{
	((UCookableProxyData*)Obj)->bAllowPlayInEditorRefinement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bAllowPlayInEditorRefinement = { "bAllowPlayInEditorRefinement", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableProxyData), &Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bAllowPlayInEditorRefinement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPlayInEditorRefinement_MetaData), NewProp_bAllowPlayInEditorRefinement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableProxyData_Statics::NewProp_RefineMeshesTimer = { "RefineMeshesTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableProxyData, RefineMeshesTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineMeshesTimer_MetaData), NewProp_RefineMeshesTimer_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableProxyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bNoProxyMeshNextCookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_bAllowPlayInEditorRefinement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableProxyData_Statics::NewProp_RefineMeshesTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableProxyData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableProxyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableProxyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableProxyData_Statics::ClassParams = {
	&UCookableProxyData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableProxyData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableProxyData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableProxyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableProxyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableProxyData()
{
	if (!Z_Registration_Info_UClass_UCookableProxyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableProxyData.OuterSingleton, Z_Construct_UClass_UCookableProxyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableProxyData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableProxyData);
UCookableProxyData::~UCookableProxyData() {}
// ********** End Class UCookableProxyData *********************************************************

// ********** Begin Class UCookableComponentData ***************************************************
void UCookableComponentData::StaticRegisterNativesUCookableComponentData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookableComponentData;
UClass* UCookableComponentData::GetPrivateStaticClass()
{
	using TClass = UCookableComponentData;
	if (!Z_Registration_Info_UClass_UCookableComponentData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookableComponentData"),
			Z_Registration_Info_UClass_UCookableComponentData.InnerSingleton,
			StaticRegisterNativesUCookableComponentData,
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
	return Z_Registration_Info_UClass_UCookableComponentData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookableComponentData_NoRegister()
{
	return UCookableComponentData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookableComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "CookableComponentData" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastComponentTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to compare transform changes and whether we need to\n// send transform updates to Houdini.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to compare transform changes and whether we need to\nsend transform updates to Houdini." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasComponentTransformChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables uploading of transformation changes back to Houdini Engine.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables uploading of transformation changes back to Houdini Engine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform changes automatically trigger cooks.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform changes automatically trigger cooks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles found on this cookable\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles found on this cookable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLiveSyncPingTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The last timestamp this cookable's component received a session sync update ping\n// used to limit the frequency at which we ping HDAs for session sync updates\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last timestamp this cookable's component received a session sync update ping\nused to limit the frequency at which we ping HDAs for session sync updates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastComponentTransform;
	static void NewProp_bHasComponentTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComponentTransformChanged;
	static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
	static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandleComponents;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastLiveSyncPingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookableComponentData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableComponentData, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_LastComponentTransform = { "LastComponentTransform", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableComponentData, LastComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastComponentTransform_MetaData), NewProp_LastComponentTransform_MetaData) };
void Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bHasComponentTransformChanged_SetBit(void* Obj)
{
	((UCookableComponentData*)Obj)->bHasComponentTransformChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bHasComponentTransformChanged = { "bHasComponentTransformChanged", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableComponentData), &Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bHasComponentTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasComponentTransformChanged_MetaData), NewProp_bHasComponentTransformChanged_MetaData) };
void Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
{
	((UCookableComponentData*)Obj)->bUploadTransformsToHoudiniEngine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableComponentData), &Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUploadTransformsToHoudiniEngine_MetaData), NewProp_bUploadTransformsToHoudiniEngine_MetaData) };
void Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
{
	((UCookableComponentData*)Obj)->bCookOnTransformChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookableComponentData), &Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnTransformChange_MetaData), NewProp_bCookOnTransformChange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_HandleComponents_Inner = { "HandleComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniHandleComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_HandleComponents = { "HandleComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableComponentData, HandleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleComponents_MetaData), NewProp_HandleComponents_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCookableComponentData_Statics::NewProp_LastLiveSyncPingTime = { "LastLiveSyncPingTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookableComponentData, LastLiveSyncPingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLiveSyncPingTime_MetaData), NewProp_LastLiveSyncPingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookableComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_LastComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bHasComponentTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bUploadTransformsToHoudiniEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_bCookOnTransformChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_HandleComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_HandleComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookableComponentData_Statics::NewProp_LastLiveSyncPingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableComponentData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookableComponentData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableComponentData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookableComponentData_Statics::ClassParams = {
	&UCookableComponentData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookableComponentData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookableComponentData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookableComponentData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookableComponentData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookableComponentData()
{
	if (!Z_Registration_Info_UClass_UCookableComponentData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookableComponentData.OuterSingleton, Z_Construct_UClass_UCookableComponentData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookableComponentData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookableComponentData);
UCookableComponentData::~UCookableComponentData() {}
// ********** End Class UCookableComponentData *****************************************************

// ********** Begin Class UCookablePDGData *********************************************************
void UCookablePDGData::StaticRegisterNativesUCookablePDGData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCookablePDGData;
UClass* UCookablePDGData::GetPrivateStaticClass()
{
	using TClass = UCookablePDGData;
	if (!Z_Registration_Info_UClass_UCookablePDGData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CookablePDGData"),
			Z_Registration_Info_UClass_UCookablePDGData.InnerSingleton,
			StaticRegisterNativesUCookablePDGData,
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
	return Z_Registration_Info_UClass_UCookablePDGData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCookablePDGData_NoRegister()
{
	return UCookablePDGData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCookablePDGData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGAssetLink_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPDGAssetLinkInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PDGAssetLink;
	static void NewProp_bIsPDGAssetLinkInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPDGAssetLinkInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookablePDGData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCookablePDGData_Statics::NewProp_PDGAssetLink = { "PDGAssetLink", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookablePDGData, PDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGAssetLink_MetaData), NewProp_PDGAssetLink_MetaData) };
void Z_Construct_UClass_UCookablePDGData_Statics::NewProp_bIsPDGAssetLinkInitialized_SetBit(void* Obj)
{
	((UCookablePDGData*)Obj)->bIsPDGAssetLinkInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookablePDGData_Statics::NewProp_bIsPDGAssetLinkInitialized = { "bIsPDGAssetLinkInitialized", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCookablePDGData), &Z_Construct_UClass_UCookablePDGData_Statics::NewProp_bIsPDGAssetLinkInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPDGAssetLinkInitialized_MetaData), NewProp_bIsPDGAssetLinkInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookablePDGData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookablePDGData_Statics::NewProp_PDGAssetLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookablePDGData_Statics::NewProp_bIsPDGAssetLinkInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookablePDGData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCookablePDGData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookablePDGData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookablePDGData_Statics::ClassParams = {
	&UCookablePDGData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCookablePDGData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCookablePDGData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookablePDGData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookablePDGData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCookablePDGData()
{
	if (!Z_Registration_Info_UClass_UCookablePDGData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookablePDGData.OuterSingleton, Z_Construct_UClass_UCookablePDGData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCookablePDGData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCookablePDGData);
UCookablePDGData::~UCookablePDGData() {}
// ********** End Class UCookablePDGData ***********************************************************

// ********** Begin Class UHoudiniCookable *********************************************************
void UHoudiniCookable::StaticRegisterNativesUHoudiniCookable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniCookable;
UClass* UHoudiniCookable::GetPrivateStaticClass()
{
	using TClass = UHoudiniCookable;
	if (!Z_Registration_Info_UClass_UHoudiniCookable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniCookable"),
			Z_Registration_Info_UClass_UHoudiniCookable.InnerSingleton,
			StaticRegisterNativesUHoudiniCookable,
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
	return Z_Registration_Info_UClass_UHoudiniCookable.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniCookable_NoRegister()
{
	return UHoudiniCookable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniCookable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Id of the corresponding Houdini node.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the corresponding Houdini node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current state (switch to new State?)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state (switch to new State?)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Result of the current state\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of the current state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookableGUID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique GUID created per cookable\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique GUID created per cookable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GUID used to track asynchronous cooking requests of this cookable\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GUID used to track asynchronous cooking requests of this cookable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This cookable's name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This cookable's name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of times this has been cooked.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times this has been cooked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AssetCookCount\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AssetCookCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateUI_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIdsToCook_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ids of the nodes that should also be cooked with this cookable\n// This can be used for additional outputs or templated nodes if used.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ids of the nodes that should also be cooked with this cookable\nThis can be used for additional outputs or templated nodes if used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesToCookCookCounts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cook counts for nodes in the NodeIdsToCook array.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cook counts for nodes in the NodeIdsToCook array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OutputNodeCookCounts\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OutputNodeCookCounts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bPendingDelete\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bPendingDelete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bRecookRequested\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bRecookRequested" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bRebuildRequested\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bRebuildRequested" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bEnableCooking\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bEnableCooking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bForceNeedUpdate\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bForceNeedUpdate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTickTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The last timestamp this cookable was ticked\n// Used to prioritize/limit the number of Cookable processed per tick\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last timestamp this cookable was ticked\nUsed to prioritize/limit the number of Cookable processed per tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO COOKABLE: Assess if needed? \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO COOKABLE: Assess if needed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO COOKABLE: Assess if needed? \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO COOKABLE: Assess if needed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO COOKABLE: Assess if needed?\n// Sometimes, specifically when editing level instances, the Unreal Editor will duplicate the HDA,\n// then duplicate it again, before we get a change to call UpdatePostDuplicate().\n// So bHasBeenDuplicated should not be cleared and is so not marked DuplicateTransient.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO COOKABLE: Assess if needed?\nSometimes, specifically when editing level instances, the Unreal Editor will duplicate the HDA,\nthen duplicate it again, before we get a change to call UpdatePostDuplicate().\nSo bHasBeenDuplicated should not be cleared and is so not marked DuplicateTransient." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdateEditorProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether or not this cookable should update its editor UI\n// This is to prevent successive calls of the function for the same cookables \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not this cookable should update its editor UI\nThis is to prevent successive calls of the function for the same cookables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPCG_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to enable certain detail panel widgets.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to enable certain detail panel widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLandscapeModification_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can the cookable modify landscapes? Primarily for PCG.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can the cookable modify landscapes? Primarily for PCG." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasHoudiniAsset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HOUDINI ASSET\n// Indicates if this cookable is using an HDA\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HOUDINI ASSET\nIndicates if this cookable is using an HDA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the HDA data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the HDA data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasParameters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PARAMETERS\n// Indicates if this cookable has parameters\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PARAMETERS\nIndicates if this cookable has parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the parameter data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the parameter data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INPUTS\n// Indicates if this cookable has inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INPUTS\nIndicates if this cookable has inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the input data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the input data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OUTPUTS\n// Indicates if this cookable has outputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OUTPUTS\nIndicates if this cookable has outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the output data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the output data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// COMPONENTS / TRANSFORM\n// Indicates if this cookable has a component/is placed in the level\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENTS / TRANSFORM\nIndicates if this cookable has a component/is placed in the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the component's data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the component's data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPDG_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PDG\n// Indicates if this cookable has access to PDG\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PDG\nIndicates if this cookable has access to PDG" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the PDG data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the PDG data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBaking_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Baking\n// Indicates if this cookable has access to baking\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Baking\nIndicates if this cookable has access to baking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the Baking data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the Baking data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasProxy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Proxy\n// Indicates if this cookable canm use proxy meshes\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy\nIndicates if this cookable canm use proxy meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyData_MetaData[] = {
		{ "Category", "HoudiniCookable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure containing the Proxy data\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure containing the Proxy data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoSlateNotifications_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowUpdateEditorProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetOptionMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHelpAndDebugMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetEditorId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the Id of the AssetEditor viewing this cookable\n// Can be null/empty if not viewded by an AssetEditor\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniCookable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the Id of the AssetEditor viewing this cookable\nCan be null/empty if not viewded by an AssetEditor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStateResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentStateResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookableGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookCount;
	static void NewProp_bAutoCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCook;
	static void NewProp_bShouldUpdateUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateUI;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIdsToCook_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIdsToCook;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodesToCookCookCounts_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodesToCookCookCounts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodesToCookCookCounts;
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
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastTickTime;
	static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
	static void NewProp_bFullyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyLoaded;
	static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
	static void NewProp_bNeedToUpdateEditorProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdateEditorProperties;
	static void NewProp_bIsPCG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPCG;
	static void NewProp_bIsLandscapeModification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLandscapeModification;
	static void NewProp_bHasHoudiniAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHoudiniAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetData;
	static void NewProp_bHasParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterData;
	static void NewProp_bHasInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputData;
	static void NewProp_bHasOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputData;
	static void NewProp_bHasComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentData;
	static void NewProp_bHasPDG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPDG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PDGData;
	static void NewProp_bHasBaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBaking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakingData;
	static void NewProp_bHasProxy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyData;
	static void NewProp_bDoSlateNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoSlateNotifications;
	static void NewProp_bAllowUpdateEditorProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowUpdateEditorProperties;
#if WITH_EDITORONLY_DATA
	static void NewProp_bGenerateMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMenuExpanded;
	static void NewProp_bBakeMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMenuExpanded;
	static void NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetOptionMenuExpanded;
	static void NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHelpAndDebugMenuExpanded;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetEditorId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniCookable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, CurrentState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1424350765
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentStateResult = { "CurrentStateResult", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, CurrentStateResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStateResult_MetaData), NewProp_CurrentStateResult_MetaData) }; // 1324121041
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CookableGUID = { "CookableGUID", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, CookableGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookableGUID_MetaData), NewProp_CookableGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapiGUID_MetaData), NewProp_HapiGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CookCount = { "CookCount", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, CookCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookCount_MetaData), NewProp_CookCount_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAutoCook_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bAutoCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAutoCook = { "bAutoCook", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAutoCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCook_MetaData), NewProp_bAutoCook_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bShouldUpdateUI_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bShouldUpdateUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bShouldUpdateUI = { "bShouldUpdateUI", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bShouldUpdateUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldUpdateUI_MetaData), NewProp_bShouldUpdateUI_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeIdsToCook_Inner = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeIdsToCook = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, NodeIdsToCook), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIdsToCook_MetaData), NewProp_NodeIdsToCook_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts_ValueProp = { "NodesToCookCookCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts_Key_KeyProp = { "NodesToCookCookCounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts = { "NodesToCookCookCounts", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, NodesToCookCookCounts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesToCookCookCounts_MetaData), NewProp_NodesToCookCookCounts_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bPendingDelete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingDelete_MetaData), NewProp_bPendingDelete_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bRecookRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecookRequested_MetaData), NewProp_bRecookRequested_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bRebuildRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildRequested_MetaData), NewProp_bRebuildRequested_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bEnableCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCooking_MetaData), NewProp_bEnableCooking_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bForceNeedUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNeedUpdate_MetaData), NewProp_bForceNeedUpdate_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bLastCookSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastCookSuccess_MetaData), NewProp_bLastCookSuccess_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_LastTickTime = { "LastTickTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, LastTickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTickTime_MetaData), NewProp_LastTickTime_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasBeenLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenLoaded_MetaData), NewProp_bHasBeenLoaded_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bFullyLoaded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bFullyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bFullyLoaded = { "bFullyLoaded", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bFullyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyLoaded_MetaData), NewProp_bFullyLoaded_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasBeenDuplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenDuplicated_MetaData), NewProp_bHasBeenDuplicated_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bNeedToUpdateEditorProperties_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bNeedToUpdateEditorProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bNeedToUpdateEditorProperties = { "bNeedToUpdateEditorProperties", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bNeedToUpdateEditorProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedToUpdateEditorProperties_MetaData), NewProp_bNeedToUpdateEditorProperties_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsPCG_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bIsPCG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsPCG = { "bIsPCG", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsPCG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPCG_MetaData), NewProp_bIsPCG_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsLandscapeModification_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bIsLandscapeModification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsLandscapeModification = { "bIsLandscapeModification", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsLandscapeModification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLandscapeModification_MetaData), NewProp_bIsLandscapeModification_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasHoudiniAsset_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasHoudiniAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasHoudiniAsset = { "bHasHoudiniAsset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasHoudiniAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasHoudiniAsset_MetaData), NewProp_bHasHoudiniAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_HoudiniAssetData = { "HoudiniAssetData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, HoudiniAssetData), Z_Construct_UClass_UCookableHoudiniAssetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAssetData_MetaData), NewProp_HoudiniAssetData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasParameters_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasParameters = { "bHasParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasParameters_MetaData), NewProp_bHasParameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, ParameterData), Z_Construct_UClass_UCookableParameterData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterData_MetaData), NewProp_ParameterData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasInputs_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasInputs = { "bHasInputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInputs_MetaData), NewProp_bHasInputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, InputData), Z_Construct_UClass_UCookableInputData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputData_MetaData), NewProp_InputData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasOutputs_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasOutputs = { "bHasOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasOutputs_MetaData), NewProp_bHasOutputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_OutputData = { "OutputData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, OutputData), Z_Construct_UClass_UCookableOutputData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputData_MetaData), NewProp_OutputData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasComponent_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasComponent = { "bHasComponent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasComponent_MetaData), NewProp_bHasComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ComponentData = { "ComponentData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, ComponentData), Z_Construct_UClass_UCookableComponentData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentData_MetaData), NewProp_ComponentData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasPDG_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasPDG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasPDG = { "bHasPDG", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasPDG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPDG_MetaData), NewProp_bHasPDG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_PDGData = { "PDGData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, PDGData), Z_Construct_UClass_UCookablePDGData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGData_MetaData), NewProp_PDGData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBaking_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasBaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBaking = { "bHasBaking", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBaking_MetaData), NewProp_bHasBaking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_BakingData = { "BakingData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, BakingData), Z_Construct_UClass_UCookableBakingData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingData_MetaData), NewProp_BakingData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasProxy_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHasProxy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasProxy = { "bHasProxy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasProxy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasProxy_MetaData), NewProp_bHasProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ProxyData = { "ProxyData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, ProxyData), Z_Construct_UClass_UCookableProxyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyData_MetaData), NewProp_ProxyData_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bDoSlateNotifications_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bDoSlateNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bDoSlateNotifications = { "bDoSlateNotifications", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bDoSlateNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoSlateNotifications_MetaData), NewProp_bDoSlateNotifications_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAllowUpdateEditorProperties_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bAllowUpdateEditorProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAllowUpdateEditorProperties = { "bAllowUpdateEditorProperties", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAllowUpdateEditorProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowUpdateEditorProperties_MetaData), NewProp_bAllowUpdateEditorProperties_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bGenerateMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bGenerateMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bGenerateMenuExpanded = { "bGenerateMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bGenerateMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateMenuExpanded_MetaData), NewProp_bGenerateMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bBakeMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bBakeMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bBakeMenuExpanded = { "bBakeMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bBakeMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeMenuExpanded_MetaData), NewProp_bBakeMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bAssetOptionMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAssetOptionMenuExpanded = { "bAssetOptionMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAssetOptionMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetOptionMenuExpanded_MetaData), NewProp_bAssetOptionMenuExpanded_MetaData) };
void Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniCookable*)Obj)->bHelpAndDebugMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHelpAndDebugMenuExpanded = { "bHelpAndDebugMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniCookable), &Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHelpAndDebugMenuExpanded_MetaData), NewProp_bHelpAndDebugMenuExpanded_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_AssetEditorId = { "AssetEditorId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniCookable, AssetEditorId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetEditorId_MetaData), NewProp_AssetEditorId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniCookable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentStateResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CurrentStateResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CookableGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_HapiGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_CookCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAutoCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bShouldUpdateUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeIdsToCook_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodeIdsToCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_NodesToCookCookCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bPendingDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRecookRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bRebuildRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bEnableCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bForceNeedUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bLastCookSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_LastTickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bFullyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBeenDuplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bNeedToUpdateEditorProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsPCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bIsLandscapeModification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasHoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_HoudiniAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ParameterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_InputData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_OutputData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ComponentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasPDG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_PDGData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasBaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_BakingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHasProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_ProxyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bDoSlateNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAllowUpdateEditorProperties,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bGenerateMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bBakeMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bAssetOptionMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_bHelpAndDebugMenuExpanded,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniCookable_Statics::NewProp_AssetEditorId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniCookable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniCookable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniCookable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniCookable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister, (int32)VTABLE_OFFSET(UHoudiniCookable, IHoudiniAssetStateEvents), false },  // 1232922661
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniCookable_Statics::ClassParams = {
	&UHoudiniCookable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniCookable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniCookable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniCookable_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniCookable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniCookable()
{
	if (!Z_Registration_Info_UClass_UHoudiniCookable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniCookable.OuterSingleton, Z_Construct_UClass_UHoudiniCookable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniCookable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniCookable);
// ********** End Class UHoudiniCookable ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniCookable_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCookableHoudiniAssetData, UCookableHoudiniAssetData::StaticClass, TEXT("UCookableHoudiniAssetData"), &Z_Registration_Info_UClass_UCookableHoudiniAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableHoudiniAssetData), 818062817U) },
		{ Z_Construct_UClass_UCookableParameterData, UCookableParameterData::StaticClass, TEXT("UCookableParameterData"), &Z_Registration_Info_UClass_UCookableParameterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableParameterData), 1058204462U) },
		{ Z_Construct_UClass_UCookableInputData, UCookableInputData::StaticClass, TEXT("UCookableInputData"), &Z_Registration_Info_UClass_UCookableInputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableInputData), 3845879732U) },
		{ Z_Construct_UClass_UCookableOutputData, UCookableOutputData::StaticClass, TEXT("UCookableOutputData"), &Z_Registration_Info_UClass_UCookableOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableOutputData), 3551881971U) },
		{ Z_Construct_UClass_UCookableBakingData, UCookableBakingData::StaticClass, TEXT("UCookableBakingData"), &Z_Registration_Info_UClass_UCookableBakingData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableBakingData), 3456873212U) },
		{ Z_Construct_UClass_UCookableProxyData, UCookableProxyData::StaticClass, TEXT("UCookableProxyData"), &Z_Registration_Info_UClass_UCookableProxyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableProxyData), 46853299U) },
		{ Z_Construct_UClass_UCookableComponentData, UCookableComponentData::StaticClass, TEXT("UCookableComponentData"), &Z_Registration_Info_UClass_UCookableComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookableComponentData), 3100393436U) },
		{ Z_Construct_UClass_UCookablePDGData, UCookablePDGData::StaticClass, TEXT("UCookablePDGData"), &Z_Registration_Info_UClass_UCookablePDGData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookablePDGData), 2812650964U) },
		{ Z_Construct_UClass_UHoudiniCookable, UHoudiniCookable::StaticClass, TEXT("UHoudiniCookable"), &Z_Registration_Info_UClass_UHoudiniCookable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniCookable), 3462109328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniCookable_h__Script_HoudiniEngineRuntime_637802644(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniCookable_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniCookable_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
