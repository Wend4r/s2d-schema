#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf78
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xf58	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xf5c	
private:
	[[maybe_unused]] uint8_t __pad0f60[0x8]; // 0xf60
public:
	int32_t m_silencedModelIndex; // 0xf68	
	bool m_inPrecache; // 0xf6c	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xf6d	
	bool m_bSkillReloadAvailable; // 0xf6e	
	bool m_bSkillReloadLiftedReloadKey; // 0xf6f	
	bool m_bSkillBoltInterruptAvailable; // 0xf70	
	bool m_bSkillBoltLiftedFireKey; // 0xf71	
};

