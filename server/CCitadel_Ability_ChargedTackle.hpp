#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1f8]; // 0xab0
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xca8	
	// MNetworkEnable
	bool m_bTackling; // 0xca9	
private:
	[[maybe_unused]] uint8_t __pad0caa[0x2]; // 0xcaa
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcac	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xcb0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xcb4	
	Vector m_vecLastPosition; // 0xcc0	
	int32_t m_nStuckFramesCount; // 0xccc	
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xcd0	
	ParticleIndex_t m_nDistancePreview; // 0xce8	
};

