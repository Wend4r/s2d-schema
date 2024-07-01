#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public C_CitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x4]; // 0xc44
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xc48	
	bool m_bCanApplyTechAmp; // 0xc60	
	bool m_bCanLifesteal; // 0xc61	
};

