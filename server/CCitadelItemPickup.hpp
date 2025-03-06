#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6528
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class CCitadelItemPickup : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x18]; // 0xc10
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc28	
	// MNetworkEnable
	int32_t m_eLootType; // 0xc40	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xc44	
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xc48	
	// MNetworkEnable
	float m_flModelScale; // 0xc50	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer; // 0xc54	
	// MNetworkEnable
	float m_flFallRate; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c5c[0xc]; // 0xc5c
public:
	Vector m_vHomePosition; // 0xc68	
	Vector m_vDropPosition; // 0xc74	
	GameTime_t m_tFirstPickupTime; // 0xc80	
	
	// Datamap fields:
	// bool m_bRequireGroundForPickup; // 0xc60
	// bool from_crate; // 0x7fffffff
	// int32_t m_eObjectivePosition; // 0xc5c
	// int32_t m_nKillingTeamNumber; // 0xc64
};

