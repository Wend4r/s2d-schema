#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "bool m_bRolling"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x1c0]; // 0xaa8
public:
	// MNetworkEnable
	CHandle< CCitadelViscousBall > m_hBall; // 0xc68	
	// MNetworkEnable
	// MNetworkChangeCallback "ViscousBallChanged"
	bool m_bRolling; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	// MNetworkEnable
	GameTime_t m_flRollStartTime; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c74[0xc]; // 0xc74
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

