#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe60
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "float m_flTackleDuration"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1c0]; // 0xc50
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe10	
	// MNetworkEnable
	bool m_bTackling; // 0xe11	
private:
	[[maybe_unused]] uint8_t __pad0e12[0x2]; // 0xe12
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe14	
	// MNetworkEnable
	float m_flTackleDuration; // 0xe18	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe1c	
	Vector m_vecLastPosition; // 0xe28	
	int32_t m_nStuckFramesCount; // 0xe34	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe38	
	GameTime_t m_flPrepareStartTime; // 0xe50	
	ParticleIndex_t m_nDistancePreview; // 0xe54	
};

