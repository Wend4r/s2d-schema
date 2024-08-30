#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac8
// Has VTable
// 
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class C_CitadelItemPickup : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0a98[0x8]; // 0xa98
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xaa0	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xaa4	
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xaa8	
	// MNetworkEnable
	float m_flModelScale; // 0xab0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer; // 0xab4	
	// MNetworkEnable
	float m_flFallRate; // 0xab8	
	
	// Datamap fields:
	// bool from_crate; // 0x7fffffff
};

