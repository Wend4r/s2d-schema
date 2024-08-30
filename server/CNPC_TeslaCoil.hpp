#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd30
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class CNPC_TeslaCoil : public CNPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x4]; // 0xd18
public:
	float m_flDeployTime; // 0xd1c	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xd24
	// void m_flSpawnTime; // 0xd20
};

