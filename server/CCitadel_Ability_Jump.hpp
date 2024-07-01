#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
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
	GameTime_t m_flLastTimeOnZipLine; // 0xaa8	
	GameTime_t m_flLastOnGroundTime; // 0xaac	
	GameTime_t m_flPhaseStartTime; // 0xab0	
	GameTime_t m_flJumpTime; // 0xab4	
	bool m_bLastJumpWasDashJump; // 0xab8	
	bool m_bShouldCreateAirJumpEffects; // 0xab9	
private:
	[[maybe_unused]] uint8_t __pad0aba[0x2]; // 0xaba
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xabc	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac4[0x11c]; // 0xac4
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xbe0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xbf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecLeapVelocity; // 0xc10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xc1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xc1d	
private:
	[[maybe_unused]] uint8_t __pad0c1e[0x2]; // 0xc1e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xc20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xc24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xc29	
};

