#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPathSimple : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x50]; // 0x4b8
public:
	CUtlString m_pathString; // 0x508	
};

