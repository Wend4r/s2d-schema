#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5bd0
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "int32 m_nCurrencyType"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class CCitadelItemPickup : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xad8	
	// MNetworkEnable
	int32_t m_eLootType; // 0xaf0	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xaf4	
	// MNetworkEnable
	int32_t m_nCurrencyType; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xb00	
	// MNetworkEnable
	float m_flModelScale; // 0xb08	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer; // 0xb0c	
	// MNetworkEnable
	float m_flFallRate; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0xc]; // 0xb14
public:
	Vector m_vHomePosition; // 0xb20	
	Vector m_vDropPosition; // 0xb2c	
	
	// Datamap fields:
	// bool m_bRequireGroundForPickup; // 0xb18
	// bool from_crate; // 0x7fffffff
	// int32_t m_eObjectivePosition; // 0xb14
	// int32_t m_nKillingTeamNumber; // 0xb1c
};

