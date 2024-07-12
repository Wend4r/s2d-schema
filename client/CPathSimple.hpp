#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x50]; // 0x538
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x588	
};

