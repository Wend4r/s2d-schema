#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xca0	
	// MNetworkEnable
	GameTime_t m_flNextAttackTime; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cbc[0x11c]; // 0xcbc
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xdd8	
	int32_t m_nNumPlayersKilled; // 0xdf0	
	int32_t m_nShootIndex; // 0xdf4	
	int32_t m_nShootIndexNPC; // 0xdf8	
	int32_t m_nBurstShots; // 0xdfc	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xe00	
	bool m_bHasCameraOverride; // 0xe04	
};

