// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniToolsEditorUISubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniToolsEditorUISubsystem() {}

// ********** Begin Cross Module References ********************************************************
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniToolsEditorUISubsystem *******************************************
void UHoudiniToolsEditorUISubsystem::StaticRegisterNativesUHoudiniToolsEditorUISubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem;
UClass* UHoudiniToolsEditorUISubsystem::GetPrivateStaticClass()
{
	using TClass = UHoudiniToolsEditorUISubsystem;
	if (!Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniToolsEditorUISubsystem"),
			Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.InnerSingleton,
			StaticRegisterNativesUHoudiniToolsEditorUISubsystem,
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
	return Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_NoRegister()
{
	return UHoudiniToolsEditorUISubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniToolsEditorUISubsystem.h" },
		{ "ModuleRelativePath", "Private/HoudiniToolsEditorUISubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolsEditorUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::ClassParams = {
	&UHoudiniToolsEditorUISubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton;
}
UHoudiniToolsEditorUISubsystem::UHoudiniToolsEditorUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolsEditorUISubsystem);
UHoudiniToolsEditorUISubsystem::~UHoudiniToolsEditorUISubsystem() {}
// ********** End Class UHoudiniToolsEditorUISubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h__Script_HoudiniEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolsEditorUISubsystem, UHoudiniToolsEditorUISubsystem::StaticClass, TEXT("UHoudiniToolsEditorUISubsystem"), &Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolsEditorUISubsystem), 4278430351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h__Script_HoudiniEngineEditor_193243037(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h__Script_HoudiniEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h__Script_HoudiniEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
