// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPresetActorFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPresetActorFactory() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPresetActorFactory ***********************************************
void UHoudiniPresetActorFactory::StaticRegisterNativesUHoudiniPresetActorFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPresetActorFactory;
UClass* UHoudiniPresetActorFactory::GetPrivateStaticClass()
{
	using TClass = UHoudiniPresetActorFactory;
	if (!Z_Registration_Info_UClass_UHoudiniPresetActorFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPresetActorFactory"),
			Z_Registration_Info_UClass_UHoudiniPresetActorFactory.InnerSingleton,
			StaticRegisterNativesUHoudiniPresetActorFactory,
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
	return Z_Registration_Info_UClass_UHoudiniPresetActorFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister()
{
	return UHoudiniPresetActorFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPresetActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniPresetActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniPresetActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPresetActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::ClassParams = {
	&UHoudiniPresetActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPresetActorFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton, Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPresetActorFactory);
UHoudiniPresetActorFactory::~UHoudiniPresetActorFactory() {}
// ********** End Class UHoudiniPresetActorFactory *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h__Script_HoudiniEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPresetActorFactory, UHoudiniPresetActorFactory::StaticClass, TEXT("UHoudiniPresetActorFactory"), &Z_Registration_Info_UClass_UHoudiniPresetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPresetActorFactory), 1178408934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h__Script_HoudiniEngineEditor_1583231119(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h__Script_HoudiniEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
