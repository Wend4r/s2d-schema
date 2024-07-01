#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5dd8
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "bool m_bPickedUp"
class CCitadelItemPickupRejuv : public CCitadelItemPickup
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x5bd0	
private:
	[[maybe_unused]] uint8_t __pad5dd0[0x4]; // 0x5dd0
public:
	// MNetworkEnable
	bool m_bPickedUp; // 0x5dd4	
};

