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

void FMovieSceneBinding::AfterRead()
{
}

void FMovieSceneBinding::BeforeDelete()
{
}

void FMovieScenePossessable::AfterRead()
{
	READ_PTR_FULL(PossessedObjectClass, UClass);
}

void FMovieScenePossessable::BeforeDelete()
{
	DELE_PTR_FULL(PossessedObjectClass);
}

void FMovieSceneSpawnable::AfterRead()
{
	READ_PTR_FULL(ObjectTemplate, UObject);
}

void FMovieSceneSpawnable::BeforeDelete()
{
	DELE_PTR_FULL(ObjectTemplate);
}

void FMovieSceneObjectBindingPtr::AfterRead()
{
}

void FMovieSceneObjectBindingPtr::BeforeDelete()
{
}

void FMovieSceneBindingOverrideData::AfterRead()
{
}

void FMovieSceneBindingOverrideData::BeforeDelete()
{
}

void FMovieSceneSequencePlaybackSettings::AfterRead()
{
}

void FMovieSceneSequencePlaybackSettings::BeforeDelete()
{
}

void FMovieSceneSectionEvalOptions::AfterRead()
{
}

void FMovieSceneSectionEvalOptions::BeforeDelete()
{
}

void FMovieSceneTrackEvalOptions::AfterRead()
{
}

void FMovieSceneTrackEvalOptions::BeforeDelete()
{
}

void FMovieSceneSegment::AfterRead()
{
}

void FMovieSceneSegment::BeforeDelete()
{
}

void FMovieSceneEvalTemplatePtr::AfterRead()
{
}

void FMovieSceneEvalTemplatePtr::BeforeDelete()
{
}

void FMovieSceneTrackImplementationPtr::AfterRead()
{
}

void FMovieSceneTrackImplementationPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationGroupLUTIndex::AfterRead()
{
}

void FMovieSceneEvaluationGroupLUTIndex::BeforeDelete()
{
}

void FMovieSceneSequenceID::AfterRead()
{
}

void FMovieSceneSequenceID::BeforeDelete()
{
}

void FMovieSceneTrackIdentifier::AfterRead()
{
}

void FMovieSceneTrackIdentifier::BeforeDelete()
{
}

void FMovieSceneSequenceTransform::AfterRead()
{
}

void FMovieSceneSequenceTransform::BeforeDelete()
{
}

void FMovieSceneGenerationLedger::AfterRead()
{
}

void FMovieSceneGenerationLedger::BeforeDelete()
{
}

void FMovieSceneTrackCompilationParams::AfterRead()
{
}

void FMovieSceneTrackCompilationParams::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchyNode::AfterRead()
{
}

void FMovieSceneSequenceHierarchyNode::BeforeDelete()
{
}

void FMovieSceneSubSequenceData::AfterRead()
{
	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void FMovieSceneSubSequenceData::BeforeDelete()
{
	DELE_PTR_FULL(Sequence);
}

void FMovieSceneSequenceHierarchy::AfterRead()
{
}

void FMovieSceneSequenceHierarchy::BeforeDelete()
{
}

void FMovieSceneEvaluationMetaData::AfterRead()
{
}

void FMovieSceneEvaluationMetaData::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldTrackPtr::AfterRead()
{
}

void FMovieSceneEvaluationFieldTrackPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldSegmentPtr::AfterRead()
{
	FMovieSceneEvaluationFieldTrackPtr::AfterRead();

}

void FMovieSceneEvaluationFieldSegmentPtr::BeforeDelete()
{
	FMovieSceneEvaluationFieldTrackPtr::BeforeDelete();

}

void FMovieSceneEvaluationGroup::AfterRead()
{
}

void FMovieSceneEvaluationGroup::BeforeDelete()
{
}

void FMovieSceneEvaluationField::AfterRead()
{
}

void FMovieSceneEvaluationField::BeforeDelete()
{
}

void FMovieSceneEvaluationTrack::AfterRead()
{
}

void FMovieSceneEvaluationTrack::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplate::AfterRead()
{
}

void FMovieSceneEvaluationTemplate::BeforeDelete()
{
}

void FCachedMovieSceneEvaluationTemplate::AfterRead()
{
	FMovieSceneEvaluationTemplate::AfterRead();

}

void FCachedMovieSceneEvaluationTemplate::BeforeDelete()
{
	FMovieSceneEvaluationTemplate::BeforeDelete();

}

void FMovieSceneTrackLabels::AfterRead()
{
}

void FMovieSceneTrackLabels::BeforeDelete()
{
}

void FMovieSceneExpansionState::AfterRead()
{
}

void FMovieSceneExpansionState::BeforeDelete()
{
}

void FMovieSceneEditorData::AfterRead()
{
}

void FMovieSceneEditorData::BeforeDelete()
{
}

void FMovieSceneEvalTemplateBase::AfterRead()
{
}

void FMovieSceneEvalTemplateBase::BeforeDelete()
{
}

void FMovieSceneEmptyStruct::AfterRead()
{
}

void FMovieSceneEmptyStruct::BeforeDelete()
{
}

void FMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FSectionEvaluationData::AfterRead()
{
}

void FSectionEvaluationData::BeforeDelete()
{
}

void FMovieSceneTrackImplementation::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneTrackImplementation::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneSectionParameters::AfterRead()
{
}

void FMovieSceneSectionParameters::BeforeDelete()
{
}

void FMovieSceneSequenceCachedSignature::AfterRead()
{
}

void FMovieSceneSequenceCachedSignature::BeforeDelete()
{
}

void FMovieSceneLegacyTrackInstanceTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Track, UMovieSceneTrack);
}

void FMovieSceneLegacyTrackInstanceTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Track);
}

void FMovieScenePropertySectionData::AfterRead()
{
}

void FMovieScenePropertySectionData::BeforeDelete()
{
}

void FMovieSceneKeyStruct::AfterRead()
{
}

void FMovieSceneKeyStruct::BeforeDelete()
{
}

void UMovieSceneSignedObject::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneSignedObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieScene::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

	READ_PTR_FULL(CameraCutTrack, UMovieSceneTrack);
}

void UMovieScene::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

	DELE_PTR_FULL(CameraCutTrack);
}

void UMovieSceneBindingOverridesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOverridesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneBindingOverrides::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBindingOverrides::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneBindingOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneFolder::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneFolder::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x01E6CFF0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CFD0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick");

	UMovieSceneSequencePlayer_StartPlayingNextTick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CE10
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params {};
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CF10
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewStartTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewEndTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	UMovieSceneSequencePlayer_SetPlaybackRange_Params params {};
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CE90
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewPlaybackPosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params {};
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CD50
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetOverridePlaybackSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMovieSceneSequencePlaybackSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm)
void UMovieSceneSequencePlayer::SetOverridePlaybackSettings(const struct FMovieSceneSequencePlaybackSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetOverridePlaybackSettings");

	UMovieSceneSequencePlayer_SetOverridePlaybackSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CD30
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayReverse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::PlayReverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CCB0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params {};
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CC90
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CC70
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E6CC40
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMovieSceneSequencePlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CBA0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlayRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CC20
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	UMovieSceneSequencePlayer_GetPlaybackStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CBF0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	UMovieSceneSequencePlayer_GetPlaybackPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CBD0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	UMovieSceneSequencePlayer_GetPlaybackEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CB70
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	UMovieSceneSequencePlayer_GetLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01E6CB50
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovieSceneSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void UMovieSceneSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Sequence);
}

void UMovieSceneSection::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSection::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneTrack::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneTrack::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneSequence::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneNameableTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneNameableTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
