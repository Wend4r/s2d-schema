#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
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
class CCitadel_Ability_Jump : public CCitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xb00	
	GameTime_t m_flLastOnGroundTime; // 0xb04	
	GameTime_t m_flPhaseStartTime; // 0xb08	
	GameTime_t m_flJumpTime; // 0xb0c	
	EJumpType_t m_LastJumpType; // 0xb10	
	bool m_bShouldCreateAirJumpEffects; // 0xb11	
private:
	[[maybe_unused]] uint8_t __pad0b12[0x2]; // 0xb12
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xb14	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb18	
	Vector m_vWallJumpNormalUsed; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b28[0x118]; // 0xb28
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc40	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump; // 0xc71	
private:
	[[maybe_unused]] uint8_t __pad0c72[0x2]; // 0xc72
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump; // 0xc7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xc7d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xc7e	
private:
	[[maybe_unused]] uint8_t __pad0c7f[0x1]; // 0xc7f
public:
	Vector m_vLastWallCollidedWithNormal; // 0xc80	
};

