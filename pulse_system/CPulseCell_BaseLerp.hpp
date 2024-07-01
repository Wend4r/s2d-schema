#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseLerp : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

