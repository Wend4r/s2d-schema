#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct StatWithCategory_t
{
public:
	// MPropertyDescription "The Stat Type"
	EStatsType m_eStatType; // 0x0	
	// MPropertyDescription "What Category does this stat belong in?"
	ECitadelStatCategory m_eStatCategory; // 0x4	
};

