// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPCGNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPCGNode() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGCookable_NoRegister();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGSettings();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGSettings_NoRegister();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHoudiniPCGOutputType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPCGOutputType;
static UEnum* EHoudiniPCGOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPCGOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPCGOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniPCGOutputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPCGOutputType.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPCGOutputType>()
{
	return EHoudiniPCGOutputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cook.Name", "EHoudiniPCGOutputType::Cook" },
		{ "CookAndBake.Name", "EHoudiniPCGOutputType::CookAndBake" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPCGOutputType::Cook", (int64)EHoudiniPCGOutputType::Cook },
		{ "EHoudiniPCGOutputType::CookAndBake", (int64)EHoudiniPCGOutputType::CookAndBake },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniPCGOutputType",
	"EHoudiniPCGOutputType",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPCGOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPCGOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPCGOutputType.InnerSingleton;
}
// ********** End Enum EHoudiniPCGOutputType *******************************************************

// ********** Begin Class UHoudiniPCGSettings ******************************************************
void UHoudiniPCGSettings::StaticRegisterNativesUHoudiniPCGSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGSettings;
UClass* UHoudiniPCGSettings::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGSettings;
	if (!Z_Registration_Info_UClass_UHoudiniPCGSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGSettings"),
			Z_Registration_Info_UClass_UHoudiniPCGSettings.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGSettings,
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
	return Z_Registration_Info_UClass_UHoudiniPCGSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGSettings_NoRegister()
{
	return UHoudiniPCGSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "HoudiniPCGNode.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "Category", "HoudiniPCG" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSynchronousLoad_MetaData[] = {
		{ "Category", "Settings|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** By default, data table loading is asynchronous, can force it synchronous if needed. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default, data table loading is asynchronous, can force it synchronous if needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of number of inputs... don't just used the cookable value so we don't break connections when the number\n// of inputs changes.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of number of inputs... don't just used the cookable value so we don't break connections when the number\nof inputs changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "HoudiniPCG" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSceneComponents_MetaData[] = {
		{ "Category", "HoudiniPCG" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDeleteTempAssets_MetaData[] = {
		{ "Category", "HoudiniPCG" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePCGCache_MetaData[] = {
		{ "Category", "HoudiniPCG" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCookable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPCGNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static void NewProp_bSynchronousLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronousLoad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static void NewProp_bCreateSceneComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSceneComponents;
	static void NewProp_bAutomaticallyDeleteTempAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDeleteTempAssets;
	static void NewProp_bUsePCGCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePCGCache;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IterationCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCookable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGSettings, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
void Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bSynchronousLoad_SetBit(void* Obj)
{
	((UHoudiniPCGSettings*)Obj)->bSynchronousLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bSynchronousLoad = { "bSynchronousLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGSettings), &Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bSynchronousLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSynchronousLoad_MetaData), NewProp_bSynchronousLoad_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGSettings, NumInputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInputs_MetaData), NewProp_NumInputs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGSettings, OutputType), Z_Construct_UEnum_HoudiniEngine_EHoudiniPCGOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 674060318
void Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bCreateSceneComponents_SetBit(void* Obj)
{
	((UHoudiniPCGSettings*)Obj)->bCreateSceneComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bCreateSceneComponents = { "bCreateSceneComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGSettings), &Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bCreateSceneComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateSceneComponents_MetaData), NewProp_bCreateSceneComponents_MetaData) };
void Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bAutomaticallyDeleteTempAssets_SetBit(void* Obj)
{
	((UHoudiniPCGSettings*)Obj)->bAutomaticallyDeleteTempAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bAutomaticallyDeleteTempAssets = { "bAutomaticallyDeleteTempAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGSettings), &Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bAutomaticallyDeleteTempAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyDeleteTempAssets_MetaData), NewProp_bAutomaticallyDeleteTempAssets_MetaData) };
void Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bUsePCGCache_SetBit(void* Obj)
{
	((UHoudiniPCGSettings*)Obj)->bUsePCGCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bUsePCGCache = { "bUsePCGCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGSettings), &Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bUsePCGCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePCGCache_MetaData), NewProp_bUsePCGCache_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGSettings, IterationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterationCount_MetaData), NewProp_IterationCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_ParameterCookable = { "ParameterCookable", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGSettings, ParameterCookable), Z_Construct_UClass_UHoudiniPCGCookable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCookable_MetaData), NewProp_ParameterCookable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bSynchronousLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_NumInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bCreateSceneComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bAutomaticallyDeleteTempAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_bUsePCGCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_IterationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGSettings_Statics::NewProp_ParameterCookable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGSettings_Statics::ClassParams = {
	&UHoudiniPCGSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGSettings()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGSettings.OuterSingleton, Z_Construct_UClass_UHoudiniPCGSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGSettings.OuterSingleton;
}
UHoudiniPCGSettings::UHoudiniPCGSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGSettings);
UHoudiniPCGSettings::~UHoudiniPCGSettings() {}
// ********** End Class UHoudiniPCGSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPCGOutputType_StaticEnum, TEXT("EHoudiniPCGOutputType"), &Z_Registration_Info_UEnum_EHoudiniPCGOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 674060318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPCGSettings, UHoudiniPCGSettings::StaticClass, TEXT("UHoudiniPCGSettings"), &Z_Registration_Info_UClass_UHoudiniPCGSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGSettings), 1482411812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_771775973(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h__Script_HoudiniEngine_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
