#pragma once

#include <cstdint>

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
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	PulseSymbol_t m_EventName; // 0x80	
};

