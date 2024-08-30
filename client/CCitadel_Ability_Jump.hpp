#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
// MNetworkVarNames "bool m_bJumped"
// MNetworkVarNames "bool m_bCanDashJump"
// MNetworkVarNames "int m_nDesiredAirJumpCount"
// MNetworkVarNames "int m_nExecutedAirJumpCount"
// MNetworkVarNames "bool m_bInSlideJump"
// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
// MNetworkVarNames "int8 m_nConsecutiveWallJumps"
// MNetworkVarNames "Vector m_vWallJumpNormal"
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xc50	
	GameTime_t m_flLastOnGroundTime; // 0xc54	
	GameTime_t m_flPhaseStartTime; // 0xc58	
	GameTime_t m_flJumpTime; // 0xc5c	
	EJumpType_t m_LastJumpType; // 0xc60	
	bool m_bShouldCreateAirJumpEffects; // 0xc61	
private:
	[[maybe_unused]] uint8_t __pad0c62[0x2]; // 0xc62
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xc64	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0x11c]; // 0xc6c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd88	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xda0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xdb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xdb9	
private:
	[[maybe_unused]] uint8_t __pad0dba[0x2]; // 0xdba
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xdbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xdc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xdc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xdc5	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xdc6	
private:
	[[maybe_unused]] uint8_t __pad0dc7[0x1]; // 0xdc7
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vWallJumpNormal; // 0xdc8	
};

