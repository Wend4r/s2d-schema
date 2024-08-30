#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public C_CitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0x4]; // 0xc6c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xc70	
	bool m_bCanApplyTechAmp; // 0xc88	
	bool m_bCanLifesteal; // 0xc89	
};

