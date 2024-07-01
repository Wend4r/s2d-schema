#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
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
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x4]; // 0xcf0
public:
	float m_flDeployTime; // 0xcf4	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xcfc
	// void m_flSpawnTime; // 0xcf8
};

