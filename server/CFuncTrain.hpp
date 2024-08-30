#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x810	
	bool m_activated; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x818	
	float m_flBlockDamage; // 0x81c	
	GameTime_t m_flNextBlockTime; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x828	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

