#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x58]; // 0x4e0
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x538	
};

