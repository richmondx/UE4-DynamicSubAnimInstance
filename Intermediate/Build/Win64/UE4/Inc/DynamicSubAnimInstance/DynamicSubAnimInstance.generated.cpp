// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/DynamicSubAnimInstancePrivatePCH.h"
#include "GeneratedCppIncludes.h"
#include "DynamicSubAnimInstance.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1DynamicSubAnimInstance() {}
class UScriptStruct* FAnimNode_DynamicSubInstance::StaticStruct()
{
	extern DYNAMICSUBANIMINSTANCE_API class UPackage* Z_Construct_UPackage__Script_DynamicSubAnimInstance();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICSUBANIMINSTANCE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance();
		extern DYNAMICSUBANIMINSTANCE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance, Z_Construct_UPackage__Script_DynamicSubAnimInstance(), TEXT("AnimNode_DynamicSubInstance"), sizeof(FAnimNode_DynamicSubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_DynamicSubInstance(FAnimNode_DynamicSubInstance::StaticStruct, TEXT("/Script/DynamicSubAnimInstance"), TEXT("AnimNode_DynamicSubInstance"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicSubAnimInstance_StaticRegisterNativesFAnimNode_DynamicSubInstance
{
	FScriptStruct_DynamicSubAnimInstance_StaticRegisterNativesFAnimNode_DynamicSubInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_DynamicSubInstance")),new UScriptStruct::TCppStructOps<FAnimNode_DynamicSubInstance>);
	}
} ScriptStruct_DynamicSubAnimInstance_StaticRegisterNativesFAnimNode_DynamicSubInstance;
	void UAnimGraphNode_DynamicSubInstance::StaticRegisterNativesUAnimGraphNode_DynamicSubInstance()
	{
	}
	IMPLEMENT_CLASS(UAnimGraphNode_DynamicSubInstance, 3329902624);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_Base();

	DYNAMICSUBANIMINSTANCE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance();
	DYNAMICSUBANIMINSTANCE_API class UClass* Z_Construct_UClass_UAnimGraphNode_DynamicSubInstance_NoRegister();
	DYNAMICSUBANIMINSTANCE_API class UClass* Z_Construct_UClass_UAnimGraphNode_DynamicSubInstance();
	DYNAMICSUBANIMINSTANCE_API class UPackage* Z_Construct_UPackage__Script_DynamicSubAnimInstance();
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicSubAnimInstance();
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_DynamicSubInstance"), sizeof(FAnimNode_DynamicSubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AnimNode_DynamicSubInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FAnimNode_SubInstance(), new UScriptStruct::TCppStructOps<FAnimNode_DynamicSubInstance>, EStructFlags(0x00000001));
			UProperty* NewProp_InputClass = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InputClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(InputClass, FAnimNode_DynamicSubInstance), 0x0014000000000005, Z_Construct_UClass_UAnimInstance_NoRegister(), UClass::StaticClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_DynamicSubInstance.h"));
			MetaData->SetValue(NewProp_InputClass, TEXT("Category"), TEXT("Links"));
			MetaData->SetValue(NewProp_InputClass, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_DynamicSubInstance.h"));
			MetaData->SetValue(NewProp_InputClass, TEXT("PinShownByDefault"), TEXT(""));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance_CRC() { return 985523060U; }
	UClass* Z_Construct_UClass_UAnimGraphNode_DynamicSubInstance_NoRegister()
	{
		return UAnimGraphNode_DynamicSubInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_DynamicSubInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimGraphNode_Base();
			Z_Construct_UPackage__Script_DynamicSubAnimInstance();
			OuterClass = UAnimGraphNode_DynamicSubInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ExposedPropertyNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExposedPropertyNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExposedPropertyNames, UAnimGraphNode_DynamicSubInstance), 0x0040000000000000);
				UProperty* NewProp_ExposedPropertyNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExposedPropertyNames, TEXT("ExposedPropertyNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_KnownExposableProperties = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KnownExposableProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KnownExposableProperties, UAnimGraphNode_DynamicSubInstance), 0x0040000000000000);
				UProperty* NewProp_KnownExposableProperties_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KnownExposableProperties, TEXT("KnownExposableProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Node = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Node"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Node, UAnimGraphNode_DynamicSubInstance), 0x0010000000000001, Z_Construct_UScriptStruct_FAnimNode_DynamicSubInstance());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Settings"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AnimGraphNode_DynamicSubInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_DynamicSubInstance.h"));
				MetaData->SetValue(NewProp_ExposedPropertyNames, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_DynamicSubInstance.h"));
				MetaData->SetValue(NewProp_ExposedPropertyNames, TEXT("ToolTip"), TEXT("Names of properties the user has chosen to expose"));
				MetaData->SetValue(NewProp_KnownExposableProperties, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_DynamicSubInstance.h"));
				MetaData->SetValue(NewProp_KnownExposableProperties, TEXT("ToolTip"), TEXT("List of property names we know to exist on the target class, so we can detect when\nProperties are added or removed on reconstruction"));
				MetaData->SetValue(NewProp_Node, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_Node, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_DynamicSubInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_DynamicSubInstance(Z_Construct_UClass_UAnimGraphNode_DynamicSubInstance, &UAnimGraphNode_DynamicSubInstance::StaticClass, TEXT("UAnimGraphNode_DynamicSubInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_DynamicSubInstance);
	UPackage* Z_Construct_UPackage__Script_DynamicSubAnimInstance()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/DynamicSubAnimInstance")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x595C6CE9;
			Guid.B = 0xE343319A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
