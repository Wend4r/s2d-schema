#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
// MNetworkVarNames "bool m_bRequestStopClimbing"
// MNetworkVarNames "bool m_bRequestJumpToRoof"
// MNetworkVarNames "GameTime_t m_flLastMoveTime"
// MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
// MNetworkVarNames "EClimbRopeState_t m_eClimbState"
class CCitadel_Ability_Climb_Rope : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
public:
	GameTime_t m_flActivatePressTime; // 0xd00	
	GameTime_t m_flDisconnectTime; // 0xd04	
	GameTime_t m_flClimbStartTime; // 0xd08	
	Vector m_vLastPos; // 0xd0c	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x8]; // 0xd18
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestStopClimbing; // 0xd20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestJumpToRoof; // 0xd21	
private:
	[[maybe_unused]] uint8_t __pad0d22[0x2]; // 0xd22
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastMoveTime; // 0xd24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xd28	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xd2c	
private:
	[[maybe_unused]] uint8_t __pad0d30[0x4]; // 0xd30
public:
	int32_t m_ClimbCount; // 0xd34	
};

