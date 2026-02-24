// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPCGComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPCGComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HOUDINIENGINE_API UClass* Z_Construct_UClass_AHoudiniPCGActor();
HOUDINIENGINE_API UClass* Z_Construct_UClass_AHoudiniPCGActor_NoRegister();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGComponent();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGComponent_NoRegister();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGCookable_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPCGComponent *****************************************************
void UHoudiniPCGComponent::StaticRegisterNativesUHoudiniPCGComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGComponent;
UClass* UHoudiniPCGComponent::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGComponent;
	if (!Z_Registration_Info_UClass_UHoudiniPCGComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGComponent"),
			Z_Registration_Info_UClass_UHoudiniPCGComponent.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGComponent,
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
	return Z_Registration_Info_UClass_UHoudiniPCGComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGComponent_NoRegister()
{
	return UHoudiniPCGComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Common" },
		{ "HideCategories", "Object Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniPCGComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cookable_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cookable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_Cookable = { "Cookable", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGComponent, Cookable), Z_Construct_UClass_UHoudiniPCGCookable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cookable_MetaData), NewProp_Cookable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGComponent, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGComponent, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_Cookable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGComponent_Statics::NewProp_PCGComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGComponent_Statics::ClassParams = {
	&UHoudiniPCGComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGComponent.OuterSingleton, Z_Construct_UClass_UHoudiniPCGComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGComponent);
UHoudiniPCGComponent::~UHoudiniPCGComponent() {}
// ********** End Class UHoudiniPCGComponent *******************************************************

// ********** Begin Class AHoudiniPCGActor *********************************************************
void AHoudiniPCGActor::StaticRegisterNativesAHoudiniPCGActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHoudiniPCGActor;
UClass* AHoudiniPCGActor::GetPrivateStaticClass()
{
	using TClass = AHoudiniPCGActor;
	if (!Z_Registration_Info_UClass_AHoudiniPCGActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGActor"),
			Z_Registration_Info_UClass_AHoudiniPCGActor.InnerSingleton,
			StaticRegisterNativesAHoudiniPCGActor,
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
	return Z_Registration_Info_UClass_AHoudiniPCGActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHoudiniPCGActor_NoRegister()
{
	return AHoudiniPCGActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHoudiniPCGActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniPCGActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHoudiniPCGActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniPCGActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniPCGActor_Statics::ClassParams = {
	&AHoudiniPCGActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniPCGActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoudiniPCGActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoudiniPCGActor()
{
	if (!Z_Registration_Info_UClass_AHoudiniPCGActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoudiniPCGActor.OuterSingleton, Z_Construct_UClass_AHoudiniPCGActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoudiniPCGActor.OuterSingleton;
}
AHoudiniPCGActor::AHoudiniPCGActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniPCGActor);
AHoudiniPCGActor::~AHoudiniPCGActor() {}
// ********** End Class AHoudiniPCGActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h__Script_HoudiniEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPCGComponent, UHoudiniPCGComponent::StaticClass, TEXT("UHoudiniPCGComponent"), &Z_Registration_Info_UClass_UHoudiniPCGComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGComponent), 3217254602U) },
		{ Z_Construct_UClass_AHoudiniPCGActor, AHoudiniPCGActor::StaticClass, TEXT("AHoudiniPCGActor"), &Z_Registration_Info_UClass_AHoudiniPCGActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoudiniPCGActor), 1410928870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h__Script_HoudiniEngine_5465261(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h__Script_HoudiniEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h__Script_HoudiniEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
