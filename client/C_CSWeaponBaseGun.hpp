#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class C_CSWeaponBaseGun : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0x1a60	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0x1a64	
	int32_t m_iSilencerBodygroup; // 0x1a68	
private:
	[[maybe_unused]] uint8_t __pad1a6c[0xc]; // 0x1a6c
public:
	int32_t m_silencedModelIndex; // 0x1a78	
	bool m_inPrecache; // 0x1a7c	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0x1a7d	
};

