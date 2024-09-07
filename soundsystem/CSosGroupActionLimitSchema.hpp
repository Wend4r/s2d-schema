#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

