// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniAssetActorFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActorFactory() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniAssetActorFactory ************************************************
void UHoudiniAssetActorFactory::StaticRegisterNativesUHoudiniAssetActorFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniAssetActorFactory;
UClass* UHoudiniAssetActorFactory::GetPrivateStaticClass()
{
	using TClass = UHoudiniAssetActorFactory;
	if (!Z_Registration_Info_UClass_UHoudiniAssetActorFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniAssetActorFactory"),
			Z_Registration_Info_UClass_UHoudiniAssetActorFactory.InnerSingleton,
			StaticRegisterNativesUHoudiniAssetActorFactory,
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
	return Z_Registration_Info_UClass_UHoudiniAssetActorFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister()
{
	return UHoudiniAssetActorFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniAssetActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams = {
	&UHoudiniAssetActorFactory::StaticClass,
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
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetActorFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton, Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetActorFactory);
UHoudiniAssetActorFactory::~UHoudiniAssetActorFactory() {}
// ********** End Class UHoudiniAssetActorFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h__Script_HoudiniEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetActorFactory, UHoudiniAssetActorFactory::StaticClass, TEXT("UHoudiniAssetActorFactory"), &Z_Registration_Info_UClass_UHoudiniAssetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetActorFactory), 2475778648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h__Script_HoudiniEngineEditor_2890899115(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
