#pragma once

#include <cstdint>

struct CPulse_OutflowConnection;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x78	
};

