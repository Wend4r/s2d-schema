#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CInfoTrooperNeutralSpawn : public CServerOnlyPointEntity
{
public:
	int32_t m_iCoverGroupID; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_iszSquadName; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e8[0xc]; // 0x4e8
public:
	ENeutralTrooperType m_eTrooperType; // 0x4f4	
};

