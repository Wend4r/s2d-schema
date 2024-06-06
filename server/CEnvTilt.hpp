#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvTilt : public CPointEntity
{
public:
	float m_Duration; // 0x4c0	
	float m_Radius; // 0x4c4	
	float m_TiltTime; // 0x4c8	
	GameTime_t m_stopTime; // 0x4cc	
	
	// Datamap fields:
	// void InputStartTilt; // 0x0
	// void InputStopTilt; // 0x0
};

