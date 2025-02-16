#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "float m_flTackleDuration"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c0]; // 0xb00
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xcc0	
	// MNetworkEnable
	bool m_bTackling; // 0xcc1	
private:
	[[maybe_unused]] uint8_t __pad0cc2[0x2]; // 0xcc2
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcc4	
	// MNetworkEnable
	float m_flTackleDuration; // 0xcc8	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xccc	
	Vector m_vecLastPosition; // 0xcd8	
	int32_t m_nStuckFramesCount; // 0xce4	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xce8	
	GameTime_t m_flPrepareStartTime; // 0xd00	
	ParticleIndex_t m_nDistancePreview; // 0xd04	
};

