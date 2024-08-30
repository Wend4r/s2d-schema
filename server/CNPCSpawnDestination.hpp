#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CNPCSpawnDestination : public CPointEntity
{
public:
	float m_ReuseDelay; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_RenameNPC; // 0x4e0	
	GameTime_t m_TimeNextAvailable; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CEntityIOOutput m_OnSpawnNPC; // 0x4f0	
};

