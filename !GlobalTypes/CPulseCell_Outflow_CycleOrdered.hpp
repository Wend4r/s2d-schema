#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

