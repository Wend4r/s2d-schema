#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb30
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
// MNetworkVarNames "CUtlString m_sAmbientNoise"
class C_Citadel_BreakblePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnActiveChanged"
	bool m_bActive; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x7]; // 0xb01
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xb08	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0x4]; // 0xb14
public:
	// MNetworkEnable
	CUtlString m_sAmbientNoise; // 0xb18	
};

