// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniInstancedActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniInstancedActorComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniInstancedActorComponent ******************************************
void UHoudiniInstancedActorComponent::StaticRegisterNativesUHoudiniInstancedActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniInstancedActorComponent;
UClass* UHoudiniInstancedActorComponent::GetPrivateStaticClass()
{
	using TClass = UHoudiniInstancedActorComponent;
	if (!Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniInstancedActorComponent"),
			Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.InnerSingleton,
			StaticRegisterNativesUHoudiniInstancedActorComponent,
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
	return Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister()
{
	return UHoudiniInstancedActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniInstancedActorComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObject_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActors_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstancedActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInstancedActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject = { "InstancedObject", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedObject_MetaData), NewProp_InstancedObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActorClass = { "InstancedActorClass", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedActorClass_MetaData), NewProp_InstancedActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_Inner = { "InstancedActors", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors = { "InstancedActors", nullptr, (EPropertyFlags)0x0144000000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedActors_MetaData), NewProp_InstancedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::ClassParams = {
	&UHoudiniInstancedActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInstancedActorComponent);
UHoudiniInstancedActorComponent::~UHoudiniInstancedActorComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniInstancedActorComponent)
// ********** End Class UHoudiniInstancedActorComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInstancedActorComponent, UHoudiniInstancedActorComponent::StaticClass, TEXT("UHoudiniInstancedActorComponent"), &Z_Registration_Info_UClass_UHoudiniInstancedActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInstancedActorComponent), 1297089356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h__Script_HoudiniEngineRuntime_662008896(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
