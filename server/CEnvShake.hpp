#pragma once

#include <cstdint>

struct GameTime_t;
struct CPhysicsShake;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CEnvShake : public CPointEntity
{
public:
	CUtlSymbolLarge m_limitToEntity; // 0x4d8	
	float m_Amplitude; // 0x4e0	
	float m_Frequency; // 0x4e4	
	float m_Duration; // 0x4e8	
	float m_Radius; // 0x4ec	
	GameTime_t m_stopTime; // 0x4f0	
	GameTime_t m_nextShake; // 0x4f4	
	float m_currentAmp; // 0x4f8	
	Vector m_maxForce; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	CPhysicsShake m_shakeCallback; // 0x510	
	
	// Datamap fields:
	// void m_pShakeController; // 0x508
	// void InputStartShake; // 0x0
	// void InputStopShake; // 0x0
	// float InputAmplitude; // 0x0
	// float InputFrequency; // 0x0
};

