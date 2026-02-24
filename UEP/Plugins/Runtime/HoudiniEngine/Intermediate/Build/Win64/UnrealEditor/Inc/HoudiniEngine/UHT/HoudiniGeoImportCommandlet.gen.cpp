// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniGeoImportCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImportCommandlet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniGeoImportCommandlet **********************************************
void UHoudiniGeoImportCommandlet::StaticRegisterNativesUHoudiniGeoImportCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet;
UClass* UHoudiniGeoImportCommandlet::GetPrivateStaticClass()
{
	using TClass = UHoudiniGeoImportCommandlet;
	if (!Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniGeoImportCommandlet"),
			Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.InnerSingleton,
			StaticRegisterNativesUHoudiniGeoImportCommandlet,
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
	return Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister()
{
	return UHoudiniGeoImportCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImportCommandlet.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImportCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImportCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams = {
	&UHoudiniGeoImportCommandlet::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet()
{
	if (!Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton, Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImportCommandlet);
UHoudiniGeoImportCommandlet::~UHoudiniGeoImportCommandlet() {}
// ********** End Class UHoudiniGeoImportCommandlet ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h__Script_HoudiniEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniGeoImportCommandlet, UHoudiniGeoImportCommandlet::StaticClass, TEXT("UHoudiniGeoImportCommandlet"), &Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniGeoImportCommandlet), 4238858271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h__Script_HoudiniEngine_3991709696(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h__Script_HoudiniEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h__Script_HoudiniEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
