// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniAssetActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniCookable_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHoudiniAssetActor *******************************************************
void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHoudiniAssetActor;
UClass* AHoudiniAssetActor::GetPrivateStaticClass()
{
	using TClass = AHoudiniAssetActor;
	if (!Z_Registration_Info_UClass_AHoudiniAssetActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniAssetActor"),
			Z_Registration_Info_UClass_AHoudiniAssetActor.InnerSingleton,
			StaticRegisterNativesAHoudiniAssetActor,
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
	return Z_Registration_Info_UClass_AHoudiniAssetActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
{
	return AHoudiniAssetActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHoudiniAssetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "HoudiniAssetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[] = {
		{ "Category", "HoudiniAssetActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, AllowPrivateAccess = \"true\"*/" },
#endif
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|HoudiniEngine" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", AllowPrivateAccess = \"true\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCookable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cookable for this HAA\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cookable for this HAA" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniCookable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniAssetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent = { "HoudiniAssetComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAssetComponent_MetaData), NewProp_HoudiniAssetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniCookable = { "HoudiniCookable", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniCookable), Z_Construct_UClass_UHoudiniCookable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniCookable_MetaData), NewProp_HoudiniCookable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniCookable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams = {
	&AHoudiniAssetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoudiniAssetActor()
{
	if (!Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton, Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
AHoudiniAssetActor::~AHoudiniAssetActor() {}
// ********** End Class AHoudiniAssetActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoudiniAssetActor, AHoudiniAssetActor::StaticClass, TEXT("AHoudiniAssetActor"), &Z_Registration_Info_UClass_AHoudiniAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoudiniAssetActor), 399842942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h__Script_HoudiniEngineRuntime_2275730542(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
