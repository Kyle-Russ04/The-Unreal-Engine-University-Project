// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPointCacheExporterHJSON.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterHJSON() {}

// ********** Begin Cross Module References ********************************************************
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHJSON();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPointCacheExporterHJSON ******************************************
void UHoudiniPointCacheExporterHJSON::StaticRegisterNativesUHoudiniPointCacheExporterHJSON()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON;
UClass* UHoudiniPointCacheExporterHJSON::GetPrivateStaticClass()
{
	using TClass = UHoudiniPointCacheExporterHJSON;
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPointCacheExporterHJSON"),
			Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.InnerSingleton,
			StaticRegisterNativesUHoudiniPointCacheExporterHJSON,
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
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_NoRegister()
{
	return UHoudiniPointCacheExporterHJSON::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterHJSON.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterHJSON.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterHJSON>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPointCacheExporterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::ClassParams = {
	&UHoudiniPointCacheExporterHJSON::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHJSON()
{
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterHJSON_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterHJSON);
UHoudiniPointCacheExporterHJSON::~UHoudiniPointCacheExporterHJSON() {}
// ********** End Class UHoudiniPointCacheExporterHJSON ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHJSON_h__Script_HoudiniNiagaraEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterHJSON, UHoudiniPointCacheExporterHJSON::StaticClass, TEXT("UHoudiniPointCacheExporterHJSON"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterHJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterHJSON), 3471237527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHJSON_h__Script_HoudiniNiagaraEditor_3124297153(TEXT("/Script/HoudiniNiagaraEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHJSON_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHJSON_h__Script_HoudiniNiagaraEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
