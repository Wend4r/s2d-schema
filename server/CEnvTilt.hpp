#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CEnvTilt : public CPointEntity
{
public:
	float m_Duration; // 0x4e0	
	float m_Radius; // 0x4e4	
	float m_TiltTime; // 0x4e8	
	GameTime_t m_stopTime; // 0x4ec	
	
	// Datamap fields:
	// void InputStartTilt; // 0x0
	// void InputStopTilt; // 0x0
};

