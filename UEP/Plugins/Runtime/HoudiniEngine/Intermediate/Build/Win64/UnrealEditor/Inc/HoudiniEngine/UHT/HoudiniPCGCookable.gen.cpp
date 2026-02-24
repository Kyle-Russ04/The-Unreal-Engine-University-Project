// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPCGCookable.h"
#include "HoudiniOutput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPCGCookable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGCookable();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGCookable_NoRegister();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPDGBakeOutput();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPDGBakeOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniCookable_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPDGBakeOutput ****************************************************
void UHoudiniPDGBakeOutput::StaticRegisterNativesUHoudiniPDGBakeOutput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPDGBakeOutput;
UClass* UHoudiniPDGBakeOutput::GetPrivateStaticClass()
{
	using TClass = UHoudiniPDGBakeOutput;
	if (!Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPDGBakeOutput"),
			Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.InnerSingleton,
			StaticRegisterNativesUHoudiniPDGBakeOutput,
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
	return Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPDGBakeOutput_NoRegister()
{
	return UHoudiniPDGBakeOutput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPDGBakeOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(0, nullptr) }; // 961134958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGBakeOutput, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputs_MetaData), NewProp_BakedOutputs_MetaData) }; // 961134958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::NewProp_BakedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::NewProp_BakedOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::ClassParams = {
	&UHoudiniPDGBakeOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPDGBakeOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.OuterSingleton, Z_Construct_UClass_UHoudiniPDGBakeOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPDGBakeOutput.OuterSingleton;
}
UHoudiniPDGBakeOutput::UHoudiniPDGBakeOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPDGBakeOutput);
UHoudiniPDGBakeOutput::~UHoudiniPDGBakeOutput() {}
// ********** End Class UHoudiniPDGBakeOutput ******************************************************

// ********** Begin Class UHoudiniPCGCookable ******************************************************
void UHoudiniPCGCookable::StaticRegisterNativesUHoudiniPCGCookable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGCookable;
UClass* UHoudiniPCGCookable::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGCookable;
	if (!Z_Registration_Info_UClass_UHoudiniPCGCookable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGCookable"),
			Z_Registration_Info_UClass_UHoudiniPCGCookable.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGCookable,
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
	return Z_Registration_Info_UClass_UHoudiniPCGCookable.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGCookable_NoRegister()
{
	return UHoudiniPCGCookable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGCookable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGCookable.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDeleteAssets_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cookable_MetaData[] = {
		{ "Category", "HoudiniPCGCookable" },
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGBakedOutput_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGCookable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutomaticallyDeleteAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDeleteAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cookable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PDGBakedOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGCookable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_bAutomaticallyDeleteAssets_SetBit(void* Obj)
{
	((UHoudiniPCGCookable*)Obj)->bAutomaticallyDeleteAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_bAutomaticallyDeleteAssets = { "bAutomaticallyDeleteAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGCookable), &Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_bAutomaticallyDeleteAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyDeleteAssets_MetaData), NewProp_bAutomaticallyDeleteAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_Cookable = { "Cookable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGCookable, Cookable), Z_Construct_UClass_UHoudiniCookable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cookable_MetaData), NewProp_Cookable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_PDGBakedOutput = { "PDGBakedOutput", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGCookable, PDGBakedOutput), Z_Construct_UClass_UHoudiniPDGBakeOutput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGBakedOutput_MetaData), NewProp_PDGBakedOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGCookable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_bAutomaticallyDeleteAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_Cookable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGCookable_Statics::NewProp_PDGBakedOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGCookable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGCookable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGCookable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGCookable_Statics::ClassParams = {
	&UHoudiniPCGCookable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGCookable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGCookable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGCookable_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGCookable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGCookable()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGCookable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGCookable.OuterSingleton, Z_Construct_UClass_UHoudiniPCGCookable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGCookable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGCookable);
// ********** End Class UHoudiniPCGCookable ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGCookable_h__Script_HoudiniEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPDGBakeOutput, UHoudiniPDGBakeOutput::StaticClass, TEXT("UHoudiniPDGBakeOutput"), &Z_Registration_Info_UClass_UHoudiniPDGBakeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPDGBakeOutput), 1235483108U) },
		{ Z_Construct_UClass_UHoudiniPCGCookable, UHoudiniPCGCookable::StaticClass, TEXT("UHoudiniPCGCookable"), &Z_Registration_Info_UClass_UHoudiniPCGCookable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGCookable), 3614366506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGCookable_h__Script_HoudiniEngine_1274998130(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGCookable_h__Script_HoudiniEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGCookable_h__Script_HoudiniEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
