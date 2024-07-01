#pragma once

#include <cstdint>

struct GameTime_t;
struct ShotID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_TechDamageProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	GameTime_t m_flNextProcTime; // 0x168	
	ShotID_t m_shotProced; // 0x16c	
};

