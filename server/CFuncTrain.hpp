#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x7f8	
	bool m_activated; // 0x7fc	
private:
	[[maybe_unused]] uint8_t __pad07fd[0x3]; // 0x7fd
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x800	
	float m_flBlockDamage; // 0x804	
	GameTime_t m_flNextBlockTime; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad080c[0x4]; // 0x80c
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x810	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

