#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb38
// Has VTable
// 
// MNetworkVarNames "float m_flAimPitch"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0af0[0xc]; // 0xaf0
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xafc	
	GameTime_t m_flNextAttackTime; // 0xb00	
	float m_flAttackCone; // 0xb04	
	float m_flAttackDelay; // 0xb08	
	GameTime_t m_flLastAlertSound; // 0xb0c	
	float m_flTrackingSpeed; // 0xb10	
	float m_flDeployTime; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b18[0xa]; // 0xb18
public:
	bool m_bHadEnemy; // 0xb22	
	bool m_bLockedOn; // 0xb23	
private:
	[[maybe_unused]] uint8_t __pad0b24[0x10]; // 0xb24
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xb34	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xb1c
	// void m_flSpawnTime; // 0xb18
};

