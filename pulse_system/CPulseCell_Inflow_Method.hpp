#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
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
	CUtlSymbolLarge m_MethodName; // 0x70	
	CUtlString m_Description; // 0x78	
	bool m_bIsPublic; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x7]; // 0x81
public:
	CPulseValueFullType m_ReturnType; // 0x88	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0x98	
};

