#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x1c0]; // 0xaa8
public:
	// MNetworkEnable
	EViscousBowlingBallState_t m_eRollingState; // 0xc68	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xc6c	
	// MNetworkEnable
	CHandle< CCitadelViscousBall > m_hBall; // 0xc70	
	// MNetworkEnable
	GameTime_t m_flRollStartTime; // 0xc74	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x8]; // 0xc78
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xc80	
	bool m_bInitializedOtherAbility; // 0xc98	
	bool m_bSetNoDraw; // 0xc99	
	bool m_bBoosting; // 0xc9a	
private:
	[[maybe_unused]] uint8_t __pad0c9b[0x9]; // 0xc9b
public:
	int32_t m_HeroHitsRemaining; // 0xca4	
};

