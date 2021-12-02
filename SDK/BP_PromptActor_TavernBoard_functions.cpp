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
//		Name   -> Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.OnRep_TavernBoardLocations
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_TavernBoard_C::OnRep_TavernBoardLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.OnRep_TavernBoardLocations");

	ABP_PromptActor_TavernBoard_C_OnRep_TavernBoardLocations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_TavernBoard_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.UserConstructionScript");

	ABP_PromptActor_TavernBoard_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PromptActor_TavernBoard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveBeginPlay");

	ABP_PromptActor_TavernBoard_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_TavernBoard_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveEndPlay");

	ABP_PromptActor_TavernBoard_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ExecuteUbergraph_BP_PromptActor_TavernBoard
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_TavernBoard_C::ExecuteUbergraph_BP_PromptActor_TavernBoard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ExecuteUbergraph_BP_PromptActor_TavernBoard");

	ABP_PromptActor_TavernBoard_C_ExecuteUbergraph_BP_PromptActor_TavernBoard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_TavernBoard_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinator, UBP_Prompt_TavernBoard_C);
}

void ABP_PromptActor_TavernBoard_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinator);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
