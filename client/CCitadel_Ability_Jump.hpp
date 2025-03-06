#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
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
	Vector m_vWallJumpNormalUsed; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x118]; // 0xc78
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd90	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xda8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped; // 0xdc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump; // 0xdc1	
private:
	[[maybe_unused]] uint8_t __pad0dc2[0x2]; // 0xdc2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xdc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xdc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump; // 0xdcc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xdcd	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xdce	
private:
	[[maybe_unused]] uint8_t __pad0dcf[0x1]; // 0xdcf
public:
	Vector m_vLastWallCollidedWithNormal; // 0xdd0	
};

