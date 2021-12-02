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
//		Name   -> Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_campfire_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript");

	Absp_campfire_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Absp_campfire_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay");

	Absp_campfire_a_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Absp_campfire_a_C::ExecuteUbergraph_bsp_campfire_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a");

	Absp_campfire_a_C_ExecuteUbergraph_bsp_campfire_a_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_campfire_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Absp_campfire_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
