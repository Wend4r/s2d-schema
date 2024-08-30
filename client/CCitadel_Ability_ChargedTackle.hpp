#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
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
	[[maybe_unused]] uint8_t __pad0c50[0x1f8]; // 0xc50
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe48	
	// MNetworkEnable
	bool m_bTackling; // 0xe49	
private:
	[[maybe_unused]] uint8_t __pad0e4a[0x2]; // 0xe4a
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe4c	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xe50	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe54	
	Vector m_vecLastPosition; // 0xe60	
	int32_t m_nStuckFramesCount; // 0xe6c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xe70	
	ParticleIndex_t m_nDistancePreview; // 0xe88	
};

