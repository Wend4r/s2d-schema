#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1b30
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class C_CSWeaponBaseGun : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0x1b10	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0x1b14	
	int32_t m_iSilencerBodygroup; // 0x1b18	
private:
	[[maybe_unused]] uint8_t __pad1b1c[0xc]; // 0x1b1c
public:
	int32_t m_silencedModelIndex; // 0x1b28	
	bool m_inPrecache; // 0x1b2c	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0x1b2d	
};

