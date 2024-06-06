#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xe98	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xe9c	
private:
	[[maybe_unused]] uint8_t __pad0ea0[0x8]; // 0xea0
public:
	int32_t m_silencedModelIndex; // 0xea8	
	bool m_inPrecache; // 0xeac	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xead	
	bool m_bSkillReloadAvailable; // 0xeae	
	bool m_bSkillReloadLiftedReloadKey; // 0xeaf	
	bool m_bSkillBoltInterruptAvailable; // 0xeb0	
	bool m_bSkillBoltLiftedFireKey; // 0xeb1	
};

