﻿// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Campaign015_Anniversary_BilgeRats_NPC2.BP_Campaign015_Anniversary_BilgeRats_NPC2_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign015_Anniversary_BilgeRats_NPC2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Campaign015_Anniversary_BilgeRats_NPC2.BP_Campaign015_Anniversary_BilgeRats_NPC2_C.UserConstructionScript");

	ABP_Campaign015_Anniversary_BilgeRats_NPC2_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Campaign015_Anniversary_BilgeRats_NPC2_C::AfterRead()
{
	AShopkeeper::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Capsule, UCapsuleComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Campaign015_Anniversary_BilgeRats_NPC2_C::BeforeDelete()
{
	AShopkeeper::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Capsule);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
