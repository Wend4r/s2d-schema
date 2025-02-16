#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1f8]; // 0xca0
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe98	
	// MNetworkEnable
	bool m_bTackling; // 0xe99	
private:
	[[maybe_unused]] uint8_t __pad0e9a[0x2]; // 0xe9a
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe9c	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xea0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xea4	
	Vector m_vecLastPosition; // 0xeb0	
	int32_t m_nStuckFramesCount; // 0xebc	
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xec0	
	ParticleIndex_t m_nDistancePreview; // 0xed8	
};

