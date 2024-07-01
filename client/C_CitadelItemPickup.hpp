#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "int32 m_nCurrencyType"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class C_CitadelItemPickup : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xa78	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xa7c	
	// MNetworkEnable
	int32_t m_nCurrencyType; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0a84[0x4]; // 0xa84
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xa88	
	// MNetworkEnable
	float m_flModelScale; // 0xa90	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer; // 0xa94	
	// MNetworkEnable
	float m_flFallRate; // 0xa98	
	
	// Datamap fields:
	// bool from_crate; // 0x7fffffff
};

