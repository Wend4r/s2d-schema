#pragma once

#include <cstdint>

struct PulseScriptedSequenceData_t;
struct CPulse_ResumePoint;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow
{
public:
	// -> m_nActorID - 0x48
	// -> m_szPreIdleSequence - 0x50
	// -> m_szEntrySequence - 0x58
	// -> m_szSequence - 0x60
	// -> m_szExitSequence - 0x68
	// -> m_bLoopPreIdleSequence - 0x70
	// -> m_bLoopActionSequence - 0x71
	// -> m_bLoopPostIdleSequence - 0x72
	// -> m_bIgnoreLookAt - 0x73
	PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x48	
	CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // 0x78	
	CPulse_ResumePoint m_OnFinished; // 0x90	
	CPulse_ResumePoint m_OnCanceled; // 0xc0	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xf0	
};

