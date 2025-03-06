#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10f0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRolling"
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flNextWallCheck"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
// MNetworkVarNames "GameTime_t m_flWallExitTime"
// MNetworkVarNames "Vector m_vecWallExitVelocity"
class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x310]; // 0xc50
public:
	int32_t m_nAirJumpsLeft; // 0xf60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkChangeCallback "OnIsRollingChanged"
	bool m_bIsRolling; // 0xf64	
private:
	[[maybe_unused]] uint8_t __pad0f65[0x3]; // 0xf65
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_CitadelViscousBall > m_hBall; // 0xf68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EViscousBowlingBallState_t m_eRollingState; // 0xf6c	
private:
	[[maybe_unused]] uint8_t __pad0f6d[0x3]; // 0xf6d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextStateTime; // 0xf70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextWallCheck; // 0xf74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flRollStartTime; // 0xf78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flWallExitTime; // 0xf7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecWallExitVelocity; // 0xf80	
private:
	[[maybe_unused]] uint8_t __pad0f8c[0x8]; // 0xf8c
public:
	ParticleIndex_t m_nDirectionParticleIndex; // 0xf94	
};

