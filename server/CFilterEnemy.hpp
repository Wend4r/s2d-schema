#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x538	
	float m_flRadius; // 0x540	
	float m_flOuterRadius; // 0x544	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x550	
};

