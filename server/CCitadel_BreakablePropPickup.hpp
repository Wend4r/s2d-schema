#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
class CCitadel_BreakablePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x978	
	// MNetworkEnable
	bool m_bActive; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0991[0x7]; // 0x991
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0x998	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0x9a0	
	
	// Datamap fields:
	// Vector spawn_position; // 0x7fffffff
};

