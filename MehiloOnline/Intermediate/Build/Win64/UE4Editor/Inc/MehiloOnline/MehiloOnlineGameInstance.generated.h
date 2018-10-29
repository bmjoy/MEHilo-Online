// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEHILOONLINE_MehiloOnlineGameInstance_generated_h
#error "MehiloOnlineGameInstance.generated.h already included, missing '#pragma once' in MehiloOnlineGameInstance.h"
#endif
#define MEHILOONLINE_MehiloOnlineGameInstance_generated_h

#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMehiloOnlineGameInstance(); \
	friend struct Z_Construct_UClass_UMehiloOnlineGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMehiloOnlineGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MehiloOnline"), NO_API) \
	DECLARE_SERIALIZER(UMehiloOnlineGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UMehiloOnlineGameInstance*>(this); }


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMehiloOnlineGameInstance(); \
	friend struct Z_Construct_UClass_UMehiloOnlineGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMehiloOnlineGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MehiloOnline"), NO_API) \
	DECLARE_SERIALIZER(UMehiloOnlineGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UMehiloOnlineGameInstance*>(this); }


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMehiloOnlineGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMehiloOnlineGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMehiloOnlineGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMehiloOnlineGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMehiloOnlineGameInstance(UMehiloOnlineGameInstance&&); \
	NO_API UMehiloOnlineGameInstance(const UMehiloOnlineGameInstance&); \
public:


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMehiloOnlineGameInstance(UMehiloOnlineGameInstance&&); \
	NO_API UMehiloOnlineGameInstance(const UMehiloOnlineGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMehiloOnlineGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMehiloOnlineGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMehiloOnlineGameInstance)


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_16_PROLOG
#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_RPC_WRAPPERS \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_INCLASS \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_INCLASS_NO_PURE_DECLS \
	MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MehiloOnline_Source_MehiloOnline_MehiloOnlineGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
