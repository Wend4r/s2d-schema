#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public CCitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af4[0x4]; // 0xaf4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xaf8	
	bool m_bCanApplyTechAmp; // 0xb10	
	bool m_bCanLifesteal; // 0xb11	
};

