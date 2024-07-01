#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CNPCSpawnDestination : public CPointEntity
{
public:
	float m_ReuseDelay; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_RenameNPC; // 0x4c0	
	GameTime_t m_TimeNextAvailable; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CEntityIOOutput m_OnSpawnNPC; // 0x4d0	
};

