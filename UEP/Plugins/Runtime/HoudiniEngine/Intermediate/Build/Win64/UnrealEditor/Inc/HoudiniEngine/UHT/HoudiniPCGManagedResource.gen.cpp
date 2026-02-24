// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPCGManagedResource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPCGManagedResource() {}

// ********** Begin Cross Module References ********************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGComponent_NoRegister();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGManagedResource();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGManagedResource_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGManagedResource();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPCGManagedResource ***********************************************
void UHoudiniPCGManagedResource::StaticRegisterNativesUHoudiniPCGManagedResource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGManagedResource;
UClass* UHoudiniPCGManagedResource::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGManagedResource;
	if (!Z_Registration_Info_UClass_UHoudiniPCGManagedResource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGManagedResource"),
			Z_Registration_Info_UClass_UHoudiniPCGManagedResource.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGManagedResource,
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
	return Z_Registration_Info_UClass_UHoudiniPCGManagedResource.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGManagedResource_NoRegister()
{
	return UHoudiniPCGManagedResource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGManagedResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniPCGManagedResource.h" },
		{ "ModuleRelativePath", "Private/HoudiniPCGManagedResource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniPCGComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPCGManagedResource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPCGManagedResource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvalidateResource_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPCGManagedResource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniPCGComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static void NewProp_bInvalidateResource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvalidateResource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGManagedResource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_HoudiniPCGComponent = { "HoudiniPCGComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGManagedResource, HoudiniPCGComponent), Z_Construct_UClass_UHoudiniPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniPCGComponent_MetaData), NewProp_HoudiniPCGComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGManagedResource, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
void Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_bInvalidateResource_SetBit(void* Obj)
{
	((UHoudiniPCGManagedResource*)Obj)->bInvalidateResource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_bInvalidateResource = { "bInvalidateResource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGManagedResource), &Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_bInvalidateResource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvalidateResource_MetaData), NewProp_bInvalidateResource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_HoudiniPCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_PCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::NewProp_bInvalidateResource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGManagedResource,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::ClassParams = {
	&UHoudiniPCGManagedResource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGManagedResource()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGManagedResource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGManagedResource.OuterSingleton, Z_Construct_UClass_UHoudiniPCGManagedResource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGManagedResource.OuterSingleton;
}
UHoudiniPCGManagedResource::UHoudiniPCGManagedResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGManagedResource);
UHoudiniPCGManagedResource::~UHoudiniPCGManagedResource() {}
// ********** End Class UHoudiniPCGManagedResource *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h__Script_HoudiniEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPCGManagedResource, UHoudiniPCGManagedResource::StaticClass, TEXT("UHoudiniPCGManagedResource"), &Z_Registration_Info_UClass_UHoudiniPCGManagedResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGManagedResource), 2072220933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h__Script_HoudiniEngine_1677694708(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h__Script_HoudiniEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h__Script_HoudiniEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
