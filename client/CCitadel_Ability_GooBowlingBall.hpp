#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
// 
// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	EViscousBowlingBallState_t m_eRollingState; // 0xde8	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xdec	
	// MNetworkEnable
	CHandle< C_CitadelViscousBall > m_hBall; // 0xdf0	
	// MNetworkEnable
	GameTime_t m_flRollStartTime; // 0xdf4	
private:
	[[maybe_unused]] uint8_t __pad0df8[0x8]; // 0xdf8
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // 0xe00	
	bool m_bInitializedOtherAbility; // 0xe18	
	bool m_bSetNoDraw; // 0xe19	
	bool m_bBoosting; // 0xe1a	
private:
	[[maybe_unused]] uint8_t __pad0e1b[0x9]; // 0xe1b
public:
	int32_t m_HeroHitsRemaining; // 0xe24	
	bool m_bBallStarted; // 0xe28	
	bool m_bBallEnded; // 0xe29	
};

