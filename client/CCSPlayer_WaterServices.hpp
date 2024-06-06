#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// Has VTable
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_flWaterJumpTime; // 0x40	
	Vector m_vecWaterJumpVel; // 0x44	
	float m_flSwimSoundTime; // 0x50	
};

