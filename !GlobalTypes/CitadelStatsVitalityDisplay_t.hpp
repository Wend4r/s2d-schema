#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct CitadelStatsVitalityDisplay_t
{
public:
	// MPropertyDescription "What stats do we want to show in the top section?"
	CUtlVector< EStatsType > m_vecDisplayStats; // 0x0	
	// MPropertyDescription "What stats do we want to show in the other stats section?"
	CUtlVector< EStatsType > m_vecOtherDisplayStats; // 0x18	
};

