#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb68
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0b08[0xc]; // 0xb08
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xb14	
	GameTime_t m_flNextAttackTime; // 0xb18	
	float m_flAttackCone; // 0xb1c	
	float m_flAttackDelay; // 0xb20	
	GameTime_t m_flLastAlertSound; // 0xb24	
	float m_flTrackingSpeed; // 0xb28	
	float m_flDeployTime; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b30[0xa]; // 0xb30
public:
	bool m_bHadEnemy; // 0xb3a	
	bool m_bLockedOn; // 0xb3b	
private:
	[[maybe_unused]] uint8_t __pad0b3c[0x8]; // 0xb3c
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xb44	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xb34
	// void m_flSpawnTime; // 0xb30
};

