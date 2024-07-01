#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x7f0	
	bool m_activated; // 0x7f4	
private:
	[[maybe_unused]] uint8_t __pad07f5[0x3]; // 0x7f5
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x7f8	
	float m_flBlockDamage; // 0x7fc	
	GameTime_t m_flNextBlockTime; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x808	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

