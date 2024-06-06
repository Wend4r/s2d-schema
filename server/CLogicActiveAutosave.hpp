#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CLogicActiveAutosave : public CLogicAutosave
{
public:
	int32_t m_TriggerHitPoints; // 0x4d0	
	float m_flTimeToTrigger; // 0x4d4	
	GameTime_t m_flStartTime; // 0x4d8	
	float m_flDangerousTime; // 0x4dc	
	
	// Datamap fields:
	// void CLogicActiveAutosaveSaveThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

