// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MehiloOnline/MehiloOnlineGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMehiloOnlineGameInstance() {}
// Cross Module References
	MEHILOONLINE_API UClass* Z_Construct_UClass_UMehiloOnlineGameInstance_NoRegister();
	MEHILOONLINE_API UClass* Z_Construct_UClass_UMehiloOnlineGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MehiloOnline();
	MEHILOONLINE_API UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_Host();
	MEHILOONLINE_API UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu();
	MEHILOONLINE_API UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_Join();
	MEHILOONLINE_API UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget();
	MEHILOONLINE_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	void UMehiloOnlineGameInstance::StaticRegisterNativesUMehiloOnlineGameInstance()
	{
		UClass* Class = UMehiloOnlineGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UMehiloOnlineGameInstance::execHost },
			{ "InGameLoadMenu", &UMehiloOnlineGameInstance::execInGameLoadMenu },
			{ "Join", &UMehiloOnlineGameInstance::execJoin },
			{ "LoadMenuWidget", &UMehiloOnlineGameInstance::execLoadMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics
	{
		struct MehiloOnlineGameInstance_eventHost_Parms
		{
			FString ServerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::NewProp_ServerName = { UE4CodeGen_Private::EPropertyClass::Str, "ServerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MehiloOnlineGameInstance_eventHost_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MehiloOnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMehiloOnlineGameInstance, "Host", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(MehiloOnlineGameInstance_eventHost_Parms), Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMehiloOnlineGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MehiloOnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMehiloOnlineGameInstance, "InGameLoadMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics
	{
		struct MehiloOnlineGameInstance_eventJoin_Parms
		{
			uint32 Index;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::UInt32, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MehiloOnlineGameInstance_eventJoin_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MehiloOnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMehiloOnlineGameInstance, "Join", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(MehiloOnlineGameInstance_eventJoin_Parms), Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMehiloOnlineGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MehiloOnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMehiloOnlineGameInstance, "LoadMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMehiloOnlineGameInstance_NoRegister()
	{
		return UMehiloOnlineGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMehiloOnlineGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MehiloOnline,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMehiloOnlineGameInstance_Host, "Host" }, // 1933966607
		{ &Z_Construct_UFunction_UMehiloOnlineGameInstance_InGameLoadMenu, "InGameLoadMenu" }, // 1230456333
		{ &Z_Construct_UFunction_UMehiloOnlineGameInstance_Join, "Join" }, // 1260275007
		{ &Z_Construct_UFunction_UMehiloOnlineGameInstance_LoadMenuWidget, "LoadMenuWidget" }, // 2430683128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MehiloOnlineGameInstance.h" },
		{ "ModuleRelativePath", "MehiloOnlineGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UMehiloOnlineGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMehiloOnlineGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::ClassParams = {
		&UMehiloOnlineGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMehiloOnlineGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMehiloOnlineGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMehiloOnlineGameInstance, 2703987300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMehiloOnlineGameInstance(Z_Construct_UClass_UMehiloOnlineGameInstance, &UMehiloOnlineGameInstance::StaticClass, TEXT("/Script/MehiloOnline"), TEXT("UMehiloOnlineGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMehiloOnlineGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
