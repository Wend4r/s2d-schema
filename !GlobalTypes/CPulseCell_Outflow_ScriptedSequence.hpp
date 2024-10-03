#pragma once

#include <cstdint>

struct PulseScriptedSequenceData_t;
struct CPulse_ResumePoint;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x120
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
	CUtlString m_szSyncGroup; // 0x48	
	int32_t m_nExpectedNumSequencesInSyncGroup; // 0x50	
	bool m_bEnsureOnNavmeshOnFinish; // 0x54	
	bool m_bDontTeleportAtEnd; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// -> m_nActorID - 0x58
	// -> m_szPreIdleSequence - 0x60
	// -> m_szEntrySequence - 0x68
	// -> m_szSequence - 0x70
	// -> m_szExitSequence - 0x78
	// -> m_nMoveTo - 0x80
	// -> m_nMoveToGait - 0x84
	// -> m_nHeldWeaponBehavior - 0x88
	// -> m_bLoopPreIdleSequence - 0x8c
	// -> m_bLoopActionSequence - 0x8d
	// -> m_bLoopPostIdleSequence - 0x8e
	// -> m_bIgnoreLookAt - 0x8f
	PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x58	
	CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // 0x90	
	CPulse_ResumePoint m_OnFinished; // 0xa8	
	CPulse_ResumePoint m_OnCanceled; // 0xd8	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0x108	
};

