#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CInfoTrooperNeutralSpawn : public CServerOnlyPointEntity
{
public:
	int32_t m_iCoverGroupID; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_iszSquadName; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c8[0xc]; // 0x4c8
public:
	ENeutralTrooperType m_eTrooperType; // 0x4d4	
};

