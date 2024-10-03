#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPulseEditorIsControlFlowNode
class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow
{
public:
	// MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
	int32_t m_nCursorsAllowedToWait; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CPulse_ResumePoint m_WaitComplete; // 0x50	
};

