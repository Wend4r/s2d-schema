#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x510	
	float m_flRadius; // 0x518	
	float m_flOuterRadius; // 0x51c	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x528	
};

