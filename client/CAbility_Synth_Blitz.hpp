#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe28
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public C_CitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0x4]; // 0xc7c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xc80	
	bool m_bCanApplyTechAmp; // 0xc98	
	bool m_bCanLifesteal; // 0xc99	
};

