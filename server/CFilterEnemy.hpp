#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x518	
	float m_flRadius; // 0x520	
	float m_flOuterRadius; // 0x524	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x530	
};

