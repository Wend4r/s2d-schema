#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
class C_Citadel_BreakblePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnActiveChanged"
	bool m_bActive; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0x7]; // 0xa91
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xa98	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xaa0	
};

