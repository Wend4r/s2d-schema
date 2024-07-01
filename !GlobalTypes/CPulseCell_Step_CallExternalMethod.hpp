#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa0
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
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlSymbolLarge m_GameBlackboard; // 0x50	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x58	
	PulseMethodCallMode_t m_nAsyncCallMode; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	CPulse_ResumePoint m_OnFinished; // 0x70	
};

