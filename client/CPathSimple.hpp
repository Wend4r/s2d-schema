#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0558[0x58]; // 0x558
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x5b0	
};

