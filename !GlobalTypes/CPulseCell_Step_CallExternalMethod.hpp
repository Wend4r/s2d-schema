#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
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
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow
{
public:
	PulseSymbol_t m_MethodName; // 0x48	
	PulseSymbol_t m_GameBlackboard; // 0x58	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x68	
	PulseMethodCallMode_t m_nAsyncCallMode; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	CPulse_ResumePoint m_OnFinished; // 0x80	
};

