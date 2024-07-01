#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
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
	[[maybe_unused]] uint8_t __pad0aa8[0x1f8]; // 0xaa8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xca0	
	// MNetworkEnable
	bool m_bTackling; // 0xca1	
private:
	[[maybe_unused]] uint8_t __pad0ca2[0x2]; // 0xca2
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xca4	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xca8	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xcac	
	Vector m_vecLastPosition; // 0xcb8	
	int32_t m_nStuckFramesCount; // 0xcc4	
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xcc8	
	ParticleIndex_t m_nDistancePreview; // 0xce0	
};

