#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	CPulse_ResumePoint m_WakeResume; // 0x48	
	CPulse_ResumePoint m_WakeCancel; // 0x78	
	CPulse_ResumePoint m_WakeFail; // 0xa8	
};

