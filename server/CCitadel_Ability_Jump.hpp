#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
// MNetworkVarNames "Vector m_vecLeapVelocity"
// MNetworkVarNames "bool m_bJumped"
// MNetworkVarNames "bool m_bCanDashJump"
// MNetworkVarNames "int m_nDesiredAirJumpCount"
// MNetworkVarNames "int m_nExecutedAirJumpCount"
// MNetworkVarNames "bool m_bInSlideJump"
// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
class CCitadel_Ability_Jump : public CCitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xab0	
	GameTime_t m_flLastOnGroundTime; // 0xab4	
	GameTime_t m_flPhaseStartTime; // 0xab8	
	GameTime_t m_flJumpTime; // 0xabc	
	bool m_bLastJumpWasDashJump; // 0xac0	
	bool m_bShouldCreateAirJumpEffects; // 0xac1	
private:
	[[maybe_unused]] uint8_t __pad0ac2[0x2]; // 0xac2
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xac4	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x11c]; // 0xacc
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xbe8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecLeapVelocity; // 0xc18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xc24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xc25	
private:
	[[maybe_unused]] uint8_t __pad0c26[0x2]; // 0xc26
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xc31	
};

