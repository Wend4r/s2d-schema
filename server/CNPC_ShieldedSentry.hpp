#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "float m_flAimPitch"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b28[0xc]; // 0xb28
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xb34	
	GameTime_t m_flNextAttackTime; // 0xb38	
	float m_flAttackCone; // 0xb3c	
	float m_flAttackDelay; // 0xb40	
	GameTime_t m_flLastAlertSound; // 0xb44	
	float m_flTrackingSpeed; // 0xb48	
	float m_flDeployTime; // 0xb4c	
private:
	[[maybe_unused]] uint8_t __pad0b50[0xa]; // 0xb50
public:
	bool m_bHadEnemy; // 0xb5a	
	bool m_bLockedOn; // 0xb5b	
private:
	[[maybe_unused]] uint8_t __pad0b5c[0x8]; // 0xb5c
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xb64	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xb54
	// void m_flSpawnTime; // 0xb50
};

