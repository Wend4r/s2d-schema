#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
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
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xca0	
	GameTime_t m_flLastOnGroundTime; // 0xca4	
	GameTime_t m_flPhaseStartTime; // 0xca8	
	GameTime_t m_flJumpTime; // 0xcac	
	EJumpType_t m_LastJumpType; // 0xcb0	
	bool m_bShouldCreateAirJumpEffects; // 0xcb1	
private:
	[[maybe_unused]] uint8_t __pad0cb2[0x2]; // 0xcb2
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xcb4	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xcb8	
	Vector m_vWallJumpNormalUsed; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x118]; // 0xcc8
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xde0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped; // 0xe10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump; // 0xe11	
private:
	[[maybe_unused]] uint8_t __pad0e12[0x2]; // 0xe12
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xe14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xe18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump; // 0xe1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xe1d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xe1e	
private:
	[[maybe_unused]] uint8_t __pad0e1f[0x1]; // 0xe1f
public:
	Vector m_vLastWallCollidedWithNormal; // 0xe20	
};

