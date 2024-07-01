#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
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
	[[maybe_unused]] uint8_t __pad0aa8[0x1c0]; // 0xaa8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xc68	
	// MNetworkEnable
	bool m_bTackling; // 0xc69	
private:
	[[maybe_unused]] uint8_t __pad0c6a[0x2]; // 0xc6a
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xc6c	
	// MNetworkEnable
	float m_flTackleDuration; // 0xc70	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xc74	
	Vector m_vecLastPosition; // 0xc80	
	int32_t m_nStuckFramesCount; // 0xc8c	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xc90	
	GameTime_t m_flPrepareStartTime; // 0xca8	
	ParticleIndex_t m_nDistancePreview; // 0xcac	
};

