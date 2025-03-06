#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	PulseSymbol_t m_MethodName; // 0x80	
	CUtlString m_Description; // 0x90	
	bool m_bIsPublic; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x7]; // 0x99
public:
	CPulseValueFullType m_ReturnType; // 0xa0	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0xb8	
};

