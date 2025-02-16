#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd40
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
	[[maybe_unused]] uint8_t __pad0b00[0x1f8]; // 0xb00
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xcf8	
	// MNetworkEnable
	bool m_bTackling; // 0xcf9	
private:
	[[maybe_unused]] uint8_t __pad0cfa[0x2]; // 0xcfa
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcfc	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xd00	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xd04	
	Vector m_vecLastPosition; // 0xd10	
	int32_t m_nStuckFramesCount; // 0xd1c	
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xd20	
	ParticleIndex_t m_nDistancePreview; // 0xd38	
};

