#pragma once

#include <cstdint>

struct SignatureOutflow_Continue;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiOutflow_WithParams : public CPulseCell_BaseFlow
{
public:
	// MPulseCellOutflow_IsDefault
	SignatureOutflow_Continue m_Out1; // 0x48	
	SignatureOutflow_Continue m_Out2; // 0x78	
};

