#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e00
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
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x5bf0	
private:
	[[maybe_unused]] uint8_t __pad5df8[0x4]; // 0x5df8
public:
	// MNetworkEnable
	bool m_bPickedUp; // 0x5dfc	
};

