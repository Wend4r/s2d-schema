#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
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
	[[maybe_unused]] uint8_t __pad0ca0[0x1c0]; // 0xca0
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe60	
	// MNetworkEnable
	bool m_bTackling; // 0xe61	
private:
	[[maybe_unused]] uint8_t __pad0e62[0x2]; // 0xe62
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe64	
	// MNetworkEnable
	float m_flTackleDuration; // 0xe68	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe6c	
	Vector m_vecLastPosition; // 0xe78	
	int32_t m_nStuckFramesCount; // 0xe84	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe88	
	GameTime_t m_flPrepareStartTime; // 0xea0	
	ParticleIndex_t m_nDistancePreview; // 0xea4	
};

