#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoMidBossSpawn : public CServerOnlyPointEntity
{
public:
	int32_t m_iCoverGroupID; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_iszSquadName; // 0x4c0	
};

