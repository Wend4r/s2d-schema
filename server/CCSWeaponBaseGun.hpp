#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf30
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xf10	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xf14	
private:
	[[maybe_unused]] uint8_t __pad0f18[0x8]; // 0xf18
public:
	int32_t m_silencedModelIndex; // 0xf20	
	bool m_inPrecache; // 0xf24	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xf25	
	bool m_bSkillReloadAvailable; // 0xf26	
	bool m_bSkillReloadLiftedReloadKey; // 0xf27	
	bool m_bSkillBoltInterruptAvailable; // 0xf28	
	bool m_bSkillBoltLiftedFireKey; // 0xf29	
};

