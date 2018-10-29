// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MehiloOnline/LobbyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}
// Cross Module References
	MEHILOONLINE_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
	MEHILOONLINE_API UClass* Z_Construct_UClass_ALobbyGameMode();
	MEHILOONLINE_API UClass* Z_Construct_UClass_AMehiloOnlineGameMode();
	UPackage* Z_Construct_UPackage__Script_MehiloOnline();
// End Cross Module References
	void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
	{
		return ALobbyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMehiloOnlineGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MehiloOnline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LobbyGameMode.h" },
		{ "ModuleRelativePath", "LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
		&ALobbyGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyGameMode, 1261471778);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyGameMode(Z_Construct_UClass_ALobbyGameMode, &ALobbyGameMode::StaticClass, TEXT("/Script/MehiloOnline"), TEXT("ALobbyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
