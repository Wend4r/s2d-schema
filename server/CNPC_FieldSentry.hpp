#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "float m_flAimPitch"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xc]; // 0xc28
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xc34	
	GameTime_t m_flNextAttackTime; // 0xc38	
	float m_flAttackCone; // 0xc3c	
	float m_flAttackDelay; // 0xc40	
	GameTime_t m_flLastAlertSound; // 0xc44	
	float m_flTrackingSpeed; // 0xc48	
	float m_flDeployTime; // 0xc4c	
private:
	[[maybe_unused]] uint8_t __pad0c50[0xa]; // 0xc50
public:
	bool m_bHadEnemy; // 0xc5a	
	bool m_bLockedOn; // 0xc5b	
private:
	[[maybe_unused]] uint8_t __pad0c5c[0x10]; // 0xc5c
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xc6c	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xc54
	// void m_flSpawnTime; // 0xc50
};

