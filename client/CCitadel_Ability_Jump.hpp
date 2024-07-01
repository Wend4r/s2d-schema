#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
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
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xc28	
	GameTime_t m_flLastOnGroundTime; // 0xc2c	
	GameTime_t m_flPhaseStartTime; // 0xc30	
	GameTime_t m_flJumpTime; // 0xc34	
	bool m_bLastJumpWasDashJump; // 0xc38	
	bool m_bShouldCreateAirJumpEffects; // 0xc39	
private:
	[[maybe_unused]] uint8_t __pad0c3a[0x2]; // 0xc3a
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xc3c	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x11c]; // 0xc44
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd60	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xd78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecLeapVelocity; // 0xd90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xd9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xd9d	
private:
	[[maybe_unused]] uint8_t __pad0d9e[0x2]; // 0xd9e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xda0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xda4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xda8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xda9	
};

