#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x838	
	bool m_activated; // 0x83c	
private:
	[[maybe_unused]] uint8_t __pad083d[0x3]; // 0x83d
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x840	
	float m_flBlockDamage; // 0x844	
	GameTime_t m_flNextBlockTime; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x850	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

