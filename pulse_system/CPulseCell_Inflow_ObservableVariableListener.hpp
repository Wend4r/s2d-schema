#pragma once

#include <cstdint>

struct CPulse_BlackboardReference;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CPulse_BlackboardReference m_BlackboardReference; // 0x70	
	bool m_bSelfReference; // 0x168	
};

