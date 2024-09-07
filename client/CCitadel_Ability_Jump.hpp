#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
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
	GameTime_t m_flLastTimeOnZipLine; // 0xc60	
	GameTime_t m_flLastOnGroundTime; // 0xc64	
	GameTime_t m_flPhaseStartTime; // 0xc68	
	GameTime_t m_flJumpTime; // 0xc6c	
	EJumpType_t m_LastJumpType; // 0xc70	
	bool m_bShouldCreateAirJumpEffects; // 0xc71	
private:
	[[maybe_unused]] uint8_t __pad0c72[0x2]; // 0xc72
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xc74	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0x11c]; // 0xc7c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd98	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xdc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xdc9	
private:
	[[maybe_unused]] uint8_t __pad0dca[0x2]; // 0xdca
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xdcc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xdd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xdd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xdd5	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xdd6	
private:
	[[maybe_unused]] uint8_t __pad0dd7[0x1]; // 0xdd7
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vWallJumpNormal; // 0xdd8	
};

