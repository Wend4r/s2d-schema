#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
// MNetworkVarNames "CUtlString m_sAmbientNoise"
class CCitadel_BreakablePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa90	
	// MNetworkEnable
	bool m_bActive; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x7]; // 0xaa9
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xab0	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0abc[0x4]; // 0xabc
public:
	// MNetworkEnable
	CUtlString m_sAmbientNoise; // 0xac0	
	
	// Datamap fields:
	// Vector spawn_position; // 0x7fffffff
};

