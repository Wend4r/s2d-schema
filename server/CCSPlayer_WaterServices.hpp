#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_NextDrownDamageTime; // 0x40	
	int32_t m_nDrownDmgRate; // 0x44	
	GameTime_t m_AirFinishedTime; // 0x48	
	float m_flWaterJumpTime; // 0x4c	
	Vector m_vecWaterJumpVel; // 0x50	
	float m_flSwimSoundTime; // 0x5c	
};

