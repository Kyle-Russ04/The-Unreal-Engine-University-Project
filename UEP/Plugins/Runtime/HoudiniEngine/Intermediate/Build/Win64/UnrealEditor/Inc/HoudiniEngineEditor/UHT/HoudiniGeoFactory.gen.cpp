// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniGeoFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniGeoFactory() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniGeoFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniGeoFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniGeoFactory *******************************************************
void UHoudiniGeoFactory::StaticRegisterNativesUHoudiniGeoFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniGeoFactory;
UClass* UHoudiniGeoFactory::GetPrivateStaticClass()
{
	using TClass = UHoudiniGeoFactory;
	if (!Z_Registration_Info_UClass_UHoudiniGeoFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniGeoFactory"),
			Z_Registration_Info_UClass_UHoudiniGeoFactory.InnerSingleton,
			StaticRegisterNativesUHoudiniGeoFactory,
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
	return Z_Registration_Info_UClass_UHoudiniGeoFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniGeoFactory_NoRegister()
{
	return UHoudiniGeoFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniGeoFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniGeoFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoFactory_Statics::ClassParams = {
	&UHoudiniGeoFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniGeoFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniGeoFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniGeoFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniGeoFactory.OuterSingleton, Z_Construct_UClass_UHoudiniGeoFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniGeoFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoFactory);
UHoudiniGeoFactory::~UHoudiniGeoFactory() {}
// ********** End Class UHoudiniGeoFactory *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h__Script_HoudiniEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniGeoFactory, UHoudiniGeoFactory::StaticClass, TEXT("UHoudiniGeoFactory"), &Z_Registration_Info_UClass_UHoudiniGeoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniGeoFactory), 2974926129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h__Script_HoudiniEngineEditor_4264531498(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
