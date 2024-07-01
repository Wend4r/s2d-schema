#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public CCitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac4[0x4]; // 0xac4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xac8	
	bool m_bCanApplyTechAmp; // 0xae0	
	bool m_bCanLifesteal; // 0xae1	
};

