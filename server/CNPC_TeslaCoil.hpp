#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe48
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
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0e30[0x4]; // 0xe30
public:
	float m_flDeployTime; // 0xe34	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xe3c
	// void m_flSpawnTime; // 0xe38
};

