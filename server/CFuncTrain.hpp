#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x7b8	
	bool m_activated; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07bd[0x3]; // 0x7bd
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x7c0	
	float m_flBlockDamage; // 0x7c4	
	GameTime_t m_flNextBlockTime; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x7d0	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

