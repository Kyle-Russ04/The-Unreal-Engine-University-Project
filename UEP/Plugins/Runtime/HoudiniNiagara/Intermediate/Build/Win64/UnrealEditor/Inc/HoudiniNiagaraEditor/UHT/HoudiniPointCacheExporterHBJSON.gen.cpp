// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPointCacheExporterHBJSON.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterHBJSON() {}

// ********** Begin Cross Module References ********************************************************
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPointCacheExporterHBJSON *****************************************
void UHoudiniPointCacheExporterHBJSON::StaticRegisterNativesUHoudiniPointCacheExporterHBJSON()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON;
UClass* UHoudiniPointCacheExporterHBJSON::GetPrivateStaticClass()
{
	using TClass = UHoudiniPointCacheExporterHBJSON;
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPointCacheExporterHBJSON"),
			Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.InnerSingleton,
			StaticRegisterNativesUHoudiniPointCacheExporterHBJSON,
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
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_NoRegister()
{
	return UHoudiniPointCacheExporterHBJSON::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterHBJSON.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterHBJSON.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterHBJSON>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPointCacheExporterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::ClassParams = {
	&UHoudiniPointCacheExporterHBJSON::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON()
{
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterHBJSON);
UHoudiniPointCacheExporterHBJSON::~UHoudiniPointCacheExporterHBJSON() {}
// ********** End Class UHoudiniPointCacheExporterHBJSON *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h__Script_HoudiniNiagaraEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON, UHoudiniPointCacheExporterHBJSON::StaticClass, TEXT("UHoudiniPointCacheExporterHBJSON"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterHBJSON), 2738030525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h__Script_HoudiniNiagaraEditor_2687098838(TEXT("/Script/HoudiniNiagaraEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
