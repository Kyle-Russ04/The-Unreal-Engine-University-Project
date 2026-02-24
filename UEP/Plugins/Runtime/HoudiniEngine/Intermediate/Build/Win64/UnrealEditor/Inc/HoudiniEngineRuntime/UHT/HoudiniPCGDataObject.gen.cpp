// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniPCGDataObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHoudiniPCGDataObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeBase();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeBase_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeDouble();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeFloat();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt64();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeQuat();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeString();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeString_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataCollection();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataCollection_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataObject();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGOutputData();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPCGOutputData_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType();
PCG_API UClass* Z_Construct_UClass_UPCGParamData_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSplineData_NoRegister();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHoudiniPCGDataAttributeBase *********************************************
void UHoudiniPCGDataAttributeBase::StaticRegisterNativesUHoudiniPCGDataAttributeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase;
UClass* UHoudiniPCGDataAttributeBase::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeBase;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeBase"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeBase,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeBase_NoRegister()
{
	return UHoudiniPCGDataAttributeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttrName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeBase, AttrName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrName_MetaData), NewProp_AttrName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::NewProp_AttrName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeBase()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase.OuterSingleton;
}
UHoudiniPCGDataAttributeBase::UHoudiniPCGDataAttributeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeBase);
UHoudiniPCGDataAttributeBase::~UHoudiniPCGDataAttributeBase() {}
// ********** End Class UHoudiniPCGDataAttributeBase ***********************************************

// ********** Begin Class UHoudiniPCGDataAttributeFloat ********************************************
void UHoudiniPCGDataAttributeFloat::StaticRegisterNativesUHoudiniPCGDataAttributeFloat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat;
UClass* UHoudiniPCGDataAttributeFloat::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeFloat;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeFloat"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeFloat,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_NoRegister()
{
	return UHoudiniPCGDataAttributeFloat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeFloat, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeFloat()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat.OuterSingleton;
}
UHoudiniPCGDataAttributeFloat::UHoudiniPCGDataAttributeFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeFloat);
UHoudiniPCGDataAttributeFloat::~UHoudiniPCGDataAttributeFloat() {}
// ********** End Class UHoudiniPCGDataAttributeFloat **********************************************

// ********** Begin Class UHoudiniPCGDataAttributeDouble *******************************************
void UHoudiniPCGDataAttributeDouble::StaticRegisterNativesUHoudiniPCGDataAttributeDouble()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble;
UClass* UHoudiniPCGDataAttributeDouble::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeDouble;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeDouble"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeDouble,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_NoRegister()
{
	return UHoudiniPCGDataAttributeDouble::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeDouble>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeDouble, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeDouble::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeDouble()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeDouble_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble.OuterSingleton;
}
UHoudiniPCGDataAttributeDouble::UHoudiniPCGDataAttributeDouble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeDouble);
UHoudiniPCGDataAttributeDouble::~UHoudiniPCGDataAttributeDouble() {}
// ********** End Class UHoudiniPCGDataAttributeDouble *********************************************

// ********** Begin Class UHoudiniPCGDataAttributeInt **********************************************
void UHoudiniPCGDataAttributeInt::StaticRegisterNativesUHoudiniPCGDataAttributeInt()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt;
UClass* UHoudiniPCGDataAttributeInt::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeInt;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeInt"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeInt,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt_NoRegister()
{
	return UHoudiniPCGDataAttributeInt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeInt, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeInt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt.OuterSingleton;
}
UHoudiniPCGDataAttributeInt::UHoudiniPCGDataAttributeInt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeInt);
UHoudiniPCGDataAttributeInt::~UHoudiniPCGDataAttributeInt() {}
// ********** End Class UHoudiniPCGDataAttributeInt ************************************************

// ********** Begin Class UHoudiniPCGDataAttributeInt64 ********************************************
void UHoudiniPCGDataAttributeInt64::StaticRegisterNativesUHoudiniPCGDataAttributeInt64()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64;
UClass* UHoudiniPCGDataAttributeInt64::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeInt64;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeInt64"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeInt64,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_NoRegister()
{
	return UHoudiniPCGDataAttributeInt64::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeInt64>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeInt64, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeInt64::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeInt64()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeInt64_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64.OuterSingleton;
}
UHoudiniPCGDataAttributeInt64::UHoudiniPCGDataAttributeInt64(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeInt64);
UHoudiniPCGDataAttributeInt64::~UHoudiniPCGDataAttributeInt64() {}
// ********** End Class UHoudiniPCGDataAttributeInt64 **********************************************

// ********** Begin Class UHoudiniPCGDataAttributeVector2d *****************************************
void UHoudiniPCGDataAttributeVector2d::StaticRegisterNativesUHoudiniPCGDataAttributeVector2d()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d;
UClass* UHoudiniPCGDataAttributeVector2d::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeVector2d;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeVector2d"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeVector2d,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_NoRegister()
{
	return UHoudiniPCGDataAttributeVector2d::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeVector2d>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeVector2d, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeVector2d::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d.OuterSingleton;
}
UHoudiniPCGDataAttributeVector2d::UHoudiniPCGDataAttributeVector2d(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeVector2d);
UHoudiniPCGDataAttributeVector2d::~UHoudiniPCGDataAttributeVector2d() {}
// ********** End Class UHoudiniPCGDataAttributeVector2d *******************************************

// ********** Begin Class UHoudiniPCGDataAttributeVector3d *****************************************
void UHoudiniPCGDataAttributeVector3d::StaticRegisterNativesUHoudiniPCGDataAttributeVector3d()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d;
UClass* UHoudiniPCGDataAttributeVector3d::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeVector3d;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeVector3d"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeVector3d,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_NoRegister()
{
	return UHoudiniPCGDataAttributeVector3d::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeVector3d>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeVector3d, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeVector3d::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d.OuterSingleton;
}
UHoudiniPCGDataAttributeVector3d::UHoudiniPCGDataAttributeVector3d(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeVector3d);
UHoudiniPCGDataAttributeVector3d::~UHoudiniPCGDataAttributeVector3d() {}
// ********** End Class UHoudiniPCGDataAttributeVector3d *******************************************

// ********** Begin Class UHoudiniPCGDataAttributeQuat *********************************************
void UHoudiniPCGDataAttributeQuat::StaticRegisterNativesUHoudiniPCGDataAttributeQuat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat;
UClass* UHoudiniPCGDataAttributeQuat::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeQuat;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeQuat"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeQuat,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_NoRegister()
{
	return UHoudiniPCGDataAttributeQuat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeQuat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeQuat, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeQuat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeQuat()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeQuat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat.OuterSingleton;
}
UHoudiniPCGDataAttributeQuat::UHoudiniPCGDataAttributeQuat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeQuat);
UHoudiniPCGDataAttributeQuat::~UHoudiniPCGDataAttributeQuat() {}
// ********** End Class UHoudiniPCGDataAttributeQuat ***********************************************

// ********** Begin Class UHoudiniPCGDataAttributeVector4d *****************************************
void UHoudiniPCGDataAttributeVector4d::StaticRegisterNativesUHoudiniPCGDataAttributeVector4d()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d;
UClass* UHoudiniPCGDataAttributeVector4d::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeVector4d;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeVector4d"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeVector4d,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_NoRegister()
{
	return UHoudiniPCGDataAttributeVector4d::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeVector4d>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeVector4d, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeVector4d::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d.OuterSingleton;
}
UHoudiniPCGDataAttributeVector4d::UHoudiniPCGDataAttributeVector4d(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeVector4d);
UHoudiniPCGDataAttributeVector4d::~UHoudiniPCGDataAttributeVector4d() {}
// ********** End Class UHoudiniPCGDataAttributeVector4d *******************************************

// ********** Begin Class UHoudiniPCGDataAttributeString *******************************************
void UHoudiniPCGDataAttributeString::StaticRegisterNativesUHoudiniPCGDataAttributeString()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString;
UClass* UHoudiniPCGDataAttributeString::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeString;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeString"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeString,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeString_NoRegister()
{
	return UHoudiniPCGDataAttributeString::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeString, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeString()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString.OuterSingleton;
}
UHoudiniPCGDataAttributeString::UHoudiniPCGDataAttributeString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeString);
UHoudiniPCGDataAttributeString::~UHoudiniPCGDataAttributeString() {}
// ********** End Class UHoudiniPCGDataAttributeString *********************************************

// ********** Begin Class UHoudiniPCGDataAttributeSoftObjectPath ***********************************
void UHoudiniPCGDataAttributeSoftObjectPath::StaticRegisterNativesUHoudiniPCGDataAttributeSoftObjectPath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath;
UClass* UHoudiniPCGDataAttributeSoftObjectPath::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeSoftObjectPath;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeSoftObjectPath"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeSoftObjectPath,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_NoRegister()
{
	return UHoudiniPCGDataAttributeSoftObjectPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeSoftObjectPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeSoftObjectPath, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeSoftObjectPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath.OuterSingleton;
}
UHoudiniPCGDataAttributeSoftObjectPath::UHoudiniPCGDataAttributeSoftObjectPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeSoftObjectPath);
UHoudiniPCGDataAttributeSoftObjectPath::~UHoudiniPCGDataAttributeSoftObjectPath() {}
// ********** End Class UHoudiniPCGDataAttributeSoftObjectPath *************************************

// ********** Begin Class UHoudiniPCGDataAttributeSoftClassPath ************************************
void UHoudiniPCGDataAttributeSoftClassPath::StaticRegisterNativesUHoudiniPCGDataAttributeSoftClassPath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath;
UClass* UHoudiniPCGDataAttributeSoftClassPath::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataAttributeSoftClassPath;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataAttributeSoftClassPath"),
			Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataAttributeSoftClassPath,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_NoRegister()
{
	return UHoudiniPCGDataAttributeSoftClassPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataAttributeSoftClassPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataAttributeSoftClassPath, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPCGDataAttributeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::ClassParams = {
	&UHoudiniPCGDataAttributeSoftClassPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath.OuterSingleton;
}
UHoudiniPCGDataAttributeSoftClassPath::UHoudiniPCGDataAttributeSoftClassPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataAttributeSoftClassPath);
UHoudiniPCGDataAttributeSoftClassPath::~UHoudiniPCGDataAttributeSoftClassPath() {}
// ********** End Class UHoudiniPCGDataAttributeSoftClassPath **************************************

// ********** Begin Class UHoudiniPCGDataObject ****************************************************
void UHoudiniPCGDataObject::StaticRegisterNativesUHoudiniPCGDataObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataObject;
UClass* UHoudiniPCGDataObject::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataObject;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataObject"),
			Z_Registration_Info_UClass_UHoudiniPCGDataObject.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataObject,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister()
{
	return UHoudiniPCGDataObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGDataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PCGDataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PCGDataType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PCGTags_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PCGTags;
	static void NewProp_bIsClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniPCGDataAttributeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataObject, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGDataType = { "PCGDataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataObject, PCGDataType), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGDataType_MetaData), NewProp_PCGDataType_MetaData) }; // 2498721046
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGTags_ElementProp = { "PCGTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGTags = { "PCGTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataObject, PCGTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGTags_MetaData), NewProp_PCGTags_MetaData) };
void Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_bIsClosed_SetBit(void* Obj)
{
	((UHoudiniPCGDataObject*)Obj)->bIsClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_bIsClosed = { "bIsClosed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPCGDataObject), &Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_bIsClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosed_MetaData), NewProp_bIsClosed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGDataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGDataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGTags_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_PCGTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataObject_Statics::NewProp_bIsClosed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataObject_Statics::ClassParams = {
	&UHoudiniPCGDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataObject()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataObject.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataObject.OuterSingleton;
}
UHoudiniPCGDataObject::UHoudiniPCGDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataObject);
UHoudiniPCGDataObject::~UHoudiniPCGDataObject() {}
// ********** End Class UHoudiniPCGDataObject ******************************************************

// ********** Begin Enum EHoudiniPCGDataType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPCGDataType;
static UEnum* EHoudiniPCGDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPCGDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPCGDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniPCGDataType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPCGDataType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPCGDataType>()
{
	return EHoudiniPCGDataType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InputPCGGeometry.Name", "EHoudiniPCGDataType::InputPCGGeometry" },
		{ "InputPCGNone.Name", "EHoudiniPCGDataType::InputPCGNone" },
		{ "InputPCGSplines.Name", "EHoudiniPCGDataType::InputPCGSplines" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPCGDataType::InputPCGNone", (int64)EHoudiniPCGDataType::InputPCGNone },
		{ "EHoudiniPCGDataType::InputPCGGeometry", (int64)EHoudiniPCGDataType::InputPCGGeometry },
		{ "EHoudiniPCGDataType::InputPCGSplines", (int64)EHoudiniPCGDataType::InputPCGSplines },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniPCGDataType",
	"EHoudiniPCGDataType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPCGDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPCGDataType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPCGDataType.InnerSingleton;
}
// ********** End Enum EHoudiniPCGDataType *********************************************************

// ********** Begin Class UHoudiniPCGDataCollection ************************************************
void UHoudiniPCGDataCollection::StaticRegisterNativesUHoudiniPCGDataCollection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGDataCollection;
UClass* UHoudiniPCGDataCollection::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGDataCollection;
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGDataCollection"),
			Z_Registration_Info_UClass_UHoudiniPCGDataCollection.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGDataCollection,
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
	return Z_Registration_Info_UClass_UHoudiniPCGDataCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGDataCollection_NoRegister()
{
	return UHoudiniPCGDataCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGDataCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primitives_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Splines_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Details;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Splines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Splines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGDataCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPCGDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 388417727
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Details), Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Primitives = { "Primitives", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Primitives), Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primitives_MetaData), NewProp_Primitives_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Vertices), Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Points), Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Splines_Inner = { "Splines", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniPCGDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Splines = { "Splines", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGDataCollection, Splines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Splines_MetaData), NewProp_Splines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Primitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Splines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::NewProp_Splines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::ClassParams = {
	&UHoudiniPCGDataCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGDataCollection()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGDataCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGDataCollection.OuterSingleton, Z_Construct_UClass_UHoudiniPCGDataCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGDataCollection.OuterSingleton;
}
UHoudiniPCGDataCollection::UHoudiniPCGDataCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGDataCollection);
UHoudiniPCGDataCollection::~UHoudiniPCGDataCollection() {}
// ********** End Class UHoudiniPCGDataCollection **************************************************

// ********** Begin Class UHoudiniPCGOutputData ****************************************************
void UHoudiniPCGOutputData::StaticRegisterNativesUHoudiniPCGOutputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHoudiniPCGOutputData;
UClass* UHoudiniPCGOutputData::GetPrivateStaticClass()
{
	using TClass = UHoudiniPCGOutputData;
	if (!Z_Registration_Info_UClass_UHoudiniPCGOutputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HoudiniPCGOutputData"),
			Z_Registration_Info_UClass_UHoudiniPCGOutputData.InnerSingleton,
			StaticRegisterNativesUHoudiniPCGOutputData,
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
	return Z_Registration_Info_UClass_UHoudiniPCGOutputData.InnerSingleton;
}
UClass* Z_Construct_UClass_UHoudiniPCGOutputData_NoRegister()
{
	return UHoudiniPCGOutputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHoudiniPCGOutputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPCGDataObject.h" },
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailsParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimsParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPCGDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailsParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimsParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPCGOutputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_DetailsParams = { "DetailsParams", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGOutputData, DetailsParams), Z_Construct_UClass_UPCGParamData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailsParams_MetaData), NewProp_DetailsParams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_PrimsParams = { "PrimsParams", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGOutputData, PrimsParams), Z_Construct_UClass_UPCGParamData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimsParams_MetaData), NewProp_PrimsParams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_VertexParams = { "VertexParams", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGOutputData, VertexParams), Z_Construct_UClass_UPCGParamData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexParams_MetaData), NewProp_VertexParams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_PointParams = { "PointParams", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGOutputData, PointParams), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointParams_MetaData), NewProp_PointParams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_SplineParams_Inner = { "SplineParams", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGSplineData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_SplineParams = { "SplineParams", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPCGOutputData, SplineParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineParams_MetaData), NewProp_SplineParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPCGOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_DetailsParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_PrimsParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_VertexParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_PointParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_SplineParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPCGOutputData_Statics::NewProp_SplineParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGOutputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPCGOutputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGOutputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPCGOutputData_Statics::ClassParams = {
	&UHoudiniPCGOutputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPCGOutputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGOutputData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPCGOutputData_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPCGOutputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPCGOutputData()
{
	if (!Z_Registration_Info_UClass_UHoudiniPCGOutputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPCGOutputData.OuterSingleton, Z_Construct_UClass_UHoudiniPCGOutputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPCGOutputData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPCGOutputData);
UHoudiniPCGOutputData::~UHoudiniPCGOutputData() {}
// ********** End Class UHoudiniPCGOutputData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPCGDataType_StaticEnum, TEXT("EHoudiniPCGDataType"), &Z_Registration_Info_UEnum_EHoudiniPCGDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 388417727U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeBase, UHoudiniPCGDataAttributeBase::StaticClass, TEXT("UHoudiniPCGDataAttributeBase"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeBase), 559084674U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeFloat, UHoudiniPCGDataAttributeFloat::StaticClass, TEXT("UHoudiniPCGDataAttributeFloat"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeFloat), 2614552914U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeDouble, UHoudiniPCGDataAttributeDouble::StaticClass, TEXT("UHoudiniPCGDataAttributeDouble"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeDouble), 936766833U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeInt, UHoudiniPCGDataAttributeInt::StaticClass, TEXT("UHoudiniPCGDataAttributeInt"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeInt), 1365396027U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeInt64, UHoudiniPCGDataAttributeInt64::StaticClass, TEXT("UHoudiniPCGDataAttributeInt64"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeInt64, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeInt64), 2247291993U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeVector2d, UHoudiniPCGDataAttributeVector2d::StaticClass, TEXT("UHoudiniPCGDataAttributeVector2d"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector2d, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeVector2d), 1956935322U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeVector3d, UHoudiniPCGDataAttributeVector3d::StaticClass, TEXT("UHoudiniPCGDataAttributeVector3d"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector3d, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeVector3d), 2220798003U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeQuat, UHoudiniPCGDataAttributeQuat::StaticClass, TEXT("UHoudiniPCGDataAttributeQuat"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeQuat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeQuat), 2513901651U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeVector4d, UHoudiniPCGDataAttributeVector4d::StaticClass, TEXT("UHoudiniPCGDataAttributeVector4d"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeVector4d, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeVector4d), 2815233737U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeString, UHoudiniPCGDataAttributeString::StaticClass, TEXT("UHoudiniPCGDataAttributeString"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeString), 49677587U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeSoftObjectPath, UHoudiniPCGDataAttributeSoftObjectPath::StaticClass, TEXT("UHoudiniPCGDataAttributeSoftObjectPath"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftObjectPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeSoftObjectPath), 3553244484U) },
		{ Z_Construct_UClass_UHoudiniPCGDataAttributeSoftClassPath, UHoudiniPCGDataAttributeSoftClassPath::StaticClass, TEXT("UHoudiniPCGDataAttributeSoftClassPath"), &Z_Registration_Info_UClass_UHoudiniPCGDataAttributeSoftClassPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataAttributeSoftClassPath), 2719977470U) },
		{ Z_Construct_UClass_UHoudiniPCGDataObject, UHoudiniPCGDataObject::StaticClass, TEXT("UHoudiniPCGDataObject"), &Z_Registration_Info_UClass_UHoudiniPCGDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataObject), 1985628978U) },
		{ Z_Construct_UClass_UHoudiniPCGDataCollection, UHoudiniPCGDataCollection::StaticClass, TEXT("UHoudiniPCGDataCollection"), &Z_Registration_Info_UClass_UHoudiniPCGDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGDataCollection), 2767678908U) },
		{ Z_Construct_UClass_UHoudiniPCGOutputData, UHoudiniPCGOutputData::StaticClass, TEXT("UHoudiniPCGOutputData"), &Z_Registration_Info_UClass_UHoudiniPCGOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPCGOutputData), 2957321013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_3756025710(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPCGDataObject_h__Script_HoudiniEngineRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
