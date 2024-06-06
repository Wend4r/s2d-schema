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
	PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x48	
	CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // 0x78	
	CPulse_ResumePoint m_OnFinished; // 0x90	
	CPulse_ResumePoint m_OnCanceled; // 0xc0	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xf0	
};

