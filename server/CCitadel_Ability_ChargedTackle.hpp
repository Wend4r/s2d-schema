#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
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
	[[maybe_unused]] uint8_t __pad0ad8[0x1f8]; // 0xad8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xcd0	
	// MNetworkEnable
	bool m_bTackling; // 0xcd1	
private:
	[[maybe_unused]] uint8_t __pad0cd2[0x2]; // 0xcd2
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcd4	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xcd8	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xcdc	
	Vector m_vecLastPosition; // 0xce8	
	int32_t m_nStuckFramesCount; // 0xcf4	
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xcf8	
	ParticleIndex_t m_nDistancePreview; // 0xd10	
};

