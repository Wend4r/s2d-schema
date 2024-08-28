#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
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
	[[maybe_unused]] uint8_t __pad0ab0[0x1c0]; // 0xab0
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xc70	
	// MNetworkEnable
	bool m_bTackling; // 0xc71	
private:
	[[maybe_unused]] uint8_t __pad0c72[0x2]; // 0xc72
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xc74	
	// MNetworkEnable
	float m_flTackleDuration; // 0xc78	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xc7c	
	Vector m_vecLastPosition; // 0xc88	
	int32_t m_nStuckFramesCount; // 0xc94	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xc98	
	GameTime_t m_flPrepareStartTime; // 0xcb0	
	ParticleIndex_t m_nDistancePreview; // 0xcb4	
};

