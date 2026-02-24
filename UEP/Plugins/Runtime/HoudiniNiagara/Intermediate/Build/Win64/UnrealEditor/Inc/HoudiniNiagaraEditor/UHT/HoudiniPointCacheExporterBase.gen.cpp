// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPointCacheExporterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UExporter();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPointCacheExporterBase *******************************************
void UHoudiniPointCacheExporterBase::StaticRegisterNativesUHoudiniPointCacheExporterBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase;
UClass* UHoudiniPointCacheExporterBase::GetPrivateStaticClass()
{
	using TClass = UHoudiniPointCacheExporterBase;
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPointCacheExporterBase"),
			Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.InnerSingleton,
			StaticRegisterNativesUHoudiniPointCacheExporterBase,
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
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase_NoRegister()
{
	return UHoudiniPointCacheExporterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterBase.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::ClassParams = {
	&UHoudiniPointCacheExporterBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase()
{
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterBase);
UHoudiniPointCacheExporterBase::~UHoudiniPointCacheExporterBase() {}
// ********** End Class UHoudiniPointCacheExporterBase *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h__Script_HoudiniNiagaraEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterBase, UHoudiniPointCacheExporterBase::StaticClass, TEXT("UHoudiniPointCacheExporterBase"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterBase), 1640295836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h__Script_HoudiniNiagaraEditor_3703578815(TEXT("/Script/HoudiniNiagaraEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
