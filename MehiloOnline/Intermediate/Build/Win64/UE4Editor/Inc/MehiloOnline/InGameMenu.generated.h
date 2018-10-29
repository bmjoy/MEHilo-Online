// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEHILOONLINE_InGameMenu_generated_h
#error "InGameMenu.generated.h already included, missing '#pragma once' in InGameMenu.h"
#endif
#define MEHILOONLINE_InGameMenu_generated_h

#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuitPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPressed(); \
		P_NATIVE_END; \
	}


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuitPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPressed(); \
		P_NATIVE_END; \
	}


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MehiloOnline"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MehiloOnline"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public:


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu)


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CancelButton() { return STRUCT_OFFSET(UInGameMenu, CancelButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UInGameMenu, QuitButton); }


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_14_PROLOG
#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_PRIVATE_PROPERTY_OFFSET \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_RPC_WRAPPERS \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_INCLASS \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_PRIVATE_PROPERTY_OFFSET \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_INCLASS_NO_PURE_DECLS \
	MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MehiloOnline_Source_MehiloOnline_MenuSystem_InGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
