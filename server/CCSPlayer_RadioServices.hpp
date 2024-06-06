#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
class CCSPlayer_RadioServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flGotHostageTalkTimer; // 0x40	
	GameTime_t m_flDefusingTalkTimer; // 0x44	
	GameTime_t m_flC4PlantTalkTimer; // 0x48	
	GameTime_t m_flRadioTokenSlots[3]; // 0x4c	
	bool m_bIgnoreRadio; // 0x58	
};

