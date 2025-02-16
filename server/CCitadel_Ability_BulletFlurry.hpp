#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xb00	
	// MNetworkEnable
	GameTime_t m_flNextAttackTime; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0x11c]; // 0xb1c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets; // 0xc38	
	int32_t m_nNumPlayersKilled; // 0xc50	
	int32_t m_nShootIndex; // 0xc54	
	int32_t m_nShootIndexNPC; // 0xc58	
	int32_t m_nBurstShots; // 0xc5c	
	bool m_bHasCameraOverride; // 0xc60	
};

