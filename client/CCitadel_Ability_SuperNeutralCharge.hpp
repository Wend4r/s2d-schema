#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
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
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xde8	
	// MNetworkEnable
	bool m_bTackling; // 0xde9	
private:
	[[maybe_unused]] uint8_t __pad0dea[0x2]; // 0xdea
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xdec	
	// MNetworkEnable
	float m_flTackleDuration; // 0xdf0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xdf4	
	Vector m_vecLastPosition; // 0xe00	
	int32_t m_nStuckFramesCount; // 0xe0c	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe10	
	GameTime_t m_flPrepareStartTime; // 0xe28	
	ParticleIndex_t m_nDistancePreview; // 0xe2c	
};

