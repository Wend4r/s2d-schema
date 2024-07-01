#pragma once

#include <cstdint>

struct PulseRuntimeOutputIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48	
};

