#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5bd8
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
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x8]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xae0	
	// MNetworkEnable
	int32_t m_eLootType; // 0xaf8	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xafc	
	// MNetworkEnable
	int32_t m_nCurrencyType; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xb08	
	// MNetworkEnable
	float m_flModelScale; // 0xb10	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer; // 0xb14	
	// MNetworkEnable
	float m_flFallRate; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0xc]; // 0xb1c
public:
	Vector m_vHomePosition; // 0xb28	
	Vector m_vDropPosition; // 0xb34	
	
	// Datamap fields:
	// bool m_bRequireGroundForPickup; // 0xb20
	// bool from_crate; // 0x7fffffff
	// int32_t m_eObjectivePosition; // 0xb1c
	// int32_t m_nKillingTeamNumber; // 0xb24
};

