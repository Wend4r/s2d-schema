#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CInfoTrooperBossSpawn : public CServerOnlyPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x10]; // 0x4b8
public:
	CUtlSymbolLarge m_strBossEntityName; // 0x4c8	
	int32_t m_iLane; // 0x4d0	
	int32_t m_iCoverGroupID; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	bool m_bReinforcementsOnly; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x17]; // 0x4e1
public:
	CEntityIOOutput m_eventOnTrooperKilled; // 0x4f8	
};

