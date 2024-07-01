#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "bool m_bRolling"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_CitadelViscousBall > m_hBall; // 0xde8	
	// MNetworkEnable
	// MNetworkChangeCallback "ViscousBallChanged"
	bool m_bRolling; // 0xdec	
private:
	[[maybe_unused]] uint8_t __pad0ded[0x3]; // 0xded
public:
	// MNetworkEnable
	GameTime_t m_flRollStartTime; // 0xdf0	
private:
	[[maybe_unused]] uint8_t __pad0df4[0xc]; // 0xdf4
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

