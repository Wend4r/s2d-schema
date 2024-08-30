#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1138
// Has VTable
// 
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
	[[maybe_unused]] uint8_t __pad0c50[0x348]; // 0xc50
public:
	bool m_bHasAirJumped; // 0xf98	
	bool m_bIsFollowingBall; // 0xf99	
	bool m_bIsShowingBall; // 0xf9a	
private:
	[[maybe_unused]] uint8_t __pad0f9b[0x1]; // 0xf9b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_CitadelViscousBall > m_hBall; // 0xf9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EViscousBowlingBallState_t m_eRollingState; // 0xfa0	
private:
	[[maybe_unused]] uint8_t __pad0fa1[0x3]; // 0xfa1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextStateTime; // 0xfa4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextWallCheck; // 0xfa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flRollStartTime; // 0xfac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flWallExitTime; // 0xfb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecWallExitVelocity; // 0xfb4	
private:
	[[maybe_unused]] uint8_t __pad0fc0[0x8]; // 0xfc0
public:
	ParticleIndex_t m_nDirectionParticleIndex; // 0xfc8	
};

