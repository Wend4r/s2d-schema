#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSoundeventPrioritySchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Priority Value, typically 0.0 to 1.0"
	CUtlString m_priorityValue; // 0x18	
	// MPropertyFriendlyName "Priority-Based Volume Multiplier, 0.0 to 1.0"
	CUtlString m_priorityVolumeScalar; // 0x20	
	// MPropertyFriendlyName "Contribute to the priority system, but volume is unaffected by it (bool)"
	CUtlString m_priorityContributeButDontRead; // 0x28	
	// MPropertyFriendlyName "Don't contribute to the priority system, but volume is affected by it (bool)"
	CUtlString m_bPriorityReadButDontContribute; // 0x30	
};

