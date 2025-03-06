#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x4]; // 0xca8
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xcac	
	// MNetworkEnable
	float m_flAimPitch; // 0xcb0	
};

