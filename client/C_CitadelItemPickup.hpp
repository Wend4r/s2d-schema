#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab0
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
private:
	[[maybe_unused]] uint8_t __pad0a78[0x8]; // 0xa78
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xa80	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xa84	
	// MNetworkEnable
	int32_t m_nCurrencyType; // 0xa88	
private:
	[[maybe_unused]] uint8_t __pad0a8c[0x4]; // 0xa8c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xa90	
	// MNetworkEnable
	float m_flModelScale; // 0xa98	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer; // 0xa9c	
	// MNetworkEnable
	float m_flFallRate; // 0xaa0	
	
	// Datamap fields:
	// bool from_crate; // 0x7fffffff
};

