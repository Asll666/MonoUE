//
// THIS FILE HAS BEEN GENERATED BY A TOOL
// DO NOT UPDATE MANUALLY
//
// Copyright (c) Microsoft Corporation.  All Rights Reserved.
// See LICENSE.txt in the plugin root for license information.

#include "MonoEditorCommon.h"
#include "MonoIdeAgent.h"
#include "Editor.h"

static_assert(sizeof(FDelegateHandle) == sizeof(uint64), "Size of FDelegateHandle has changed");


MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_BeginPIE_Add(void(*handler)(bool))
{
	FDelegateHandle handle = FEditorDelegates::BeginPIE.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_BeginPIE_Remove(uint64 delegateHandle)
{
	FEditorDelegates::BeginPIE.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}



MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_EndPIE_Add(void(*handler)(bool))
{
	FDelegateHandle handle = FEditorDelegates::EndPIE.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_EndPIE_Remove(uint64 delegateHandle)
{
	FEditorDelegates::EndPIE.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}



MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_PausePIE_Add(void(*handler)(bool))
{
	FDelegateHandle handle = FEditorDelegates::PausePIE.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_PausePIE_Remove(uint64 delegateHandle)
{
	FEditorDelegates::PausePIE.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}



MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_ResumePIE_Add(void(*handler)(bool))
{
	FDelegateHandle handle = FEditorDelegates::ResumePIE.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_ResumePIE_Remove(uint64 delegateHandle)
{
	FEditorDelegates::ResumePIE.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}



MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_SingleStepPIE_Add(void(*handler)(bool))
{
	FDelegateHandle handle = FEditorDelegates::SingleStepPIE.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_SingleStepPIE_Remove(uint64 delegateHandle)
{
	FEditorDelegates::SingleStepPIE.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}



MONO_PINVOKE_FUNCTION(uint64) MonoIdeAgent_FEditorDelegates_BeginLocalPlay_Add(void(*handler)(uint32))
{
	FDelegateHandle handle = FEditorDelegates::BeginStandaloneLocalPlay.AddStatic(handler);
	return *reinterpret_cast<uint64*>(&handle);
}

MONO_PINVOKE_FUNCTION(void) MonoIdeAgent_FEditorDelegates_BeginLocalPlay_Remove(uint64 delegateHandle)
{
	FEditorDelegates::BeginStandaloneLocalPlay.Remove(*reinterpret_cast<FDelegateHandle*>(&delegateHandle));
}

