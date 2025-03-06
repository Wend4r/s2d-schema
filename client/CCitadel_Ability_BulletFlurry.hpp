#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xc50	
	// MNetworkEnable
	GameTime_t m_flNextAttackTime; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0x11c]; // 0xc6c
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xd88	
	int32_t m_nNumPlayersKilled; // 0xda0	
	int32_t m_nShootIndex; // 0xda4	
	int32_t m_nShootIndexNPC; // 0xda8	
	int32_t m_nBurstShots; // 0xdac	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xdb0	
	bool m_bHasCameraOverride; // 0xdb4	
};

