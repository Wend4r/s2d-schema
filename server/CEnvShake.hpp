#pragma once

#include <cstdint>

struct GameTime_t;
struct CPhysicsShake;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CEnvShake : public CPointEntity
{
public:
	CUtlSymbolLarge m_limitToEntity; // 0x4b8	
	float m_Amplitude; // 0x4c0	
	float m_Frequency; // 0x4c4	
	float m_Duration; // 0x4c8	
	float m_Radius; // 0x4cc	
	GameTime_t m_stopTime; // 0x4d0	
	GameTime_t m_nextShake; // 0x4d4	
	float m_currentAmp; // 0x4d8	
	Vector m_maxForce; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CPhysicsShake m_shakeCallback; // 0x4f0	
	
	// Datamap fields:
	// void m_pShakeController; // 0x4e8
	// void InputStartShake; // 0x0
	// void InputStopShake; // 0x0
	// float InputAmplitude; // 0x0
	// float InputFrequency; // 0x0
};

