// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniParameterButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniParameterButton() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButton();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniParameterButton **************************************************
void UHoudiniParameterButton::StaticRegisterNativesUHoudiniParameterButton()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniParameterButton;
UClass* UHoudiniParameterButton::GetPrivateStaticClass()
{
	using TClass = UHoudiniParameterButton;
	if (!Z_Registration_Info_UClass_UHoudiniParameterButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniParameterButton"),
			Z_Registration_Info_UClass_UHoudiniParameterButton.InnerSingleton,
			StaticRegisterNativesUHoudiniParameterButton,
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
	return Z_Registration_Info_UClass_UHoudiniParameterButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniParameterButton_NoRegister()
{
	return UHoudiniParameterButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterButton.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniParameterButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterButton_Statics::ClassParams = {
	&UHoudiniParameterButton::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterButton()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterButton.OuterSingleton, Z_Construct_UClass_UHoudiniParameterButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterButton);
UHoudiniParameterButton::~UHoudiniParameterButton() {}
// ********** End Class UHoudiniParameterButton ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterButton, UHoudiniParameterButton::StaticClass, TEXT("UHoudiniParameterButton"), &Z_Registration_Info_UClass_UHoudiniParameterButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterButton), 3471824924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h__Script_HoudiniEngineRuntime_4119091049(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
