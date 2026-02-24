// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniAssetFactory *****************************************************
void UHoudiniAssetFactory::StaticRegisterNativesUHoudiniAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniAssetFactory;
UClass* UHoudiniAssetFactory::GetPrivateStaticClass()
{
	using TClass = UHoudiniAssetFactory;
	if (!Z_Registration_Info_UClass_UHoudiniAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniAssetFactory"),
			Z_Registration_Info_UClass_UHoudiniAssetFactory.InnerSingleton,
			StaticRegisterNativesUHoudiniAssetFactory,
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
	return Z_Registration_Info_UClass_UHoudiniAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniAssetFactory_NoRegister()
{
	return UHoudiniAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniAssetFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetFactory_Statics::ClassParams = {
	&UHoudiniAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetFactory.OuterSingleton, Z_Construct_UClass_UHoudiniAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetFactory);
UHoudiniAssetFactory::~UHoudiniAssetFactory() {}
// ********** End Class UHoudiniAssetFactory *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h__Script_HoudiniEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetFactory, UHoudiniAssetFactory::StaticClass, TEXT("UHoudiniAssetFactory"), &Z_Registration_Info_UClass_UHoudiniAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetFactory), 1582300986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h__Script_HoudiniEngineEditor_3314040744(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
