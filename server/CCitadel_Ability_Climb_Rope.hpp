#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
// MNetworkVarNames "bool m_bRequestStopClimbing"
// MNetworkVarNames "bool m_bRequestJumpToRoof"
// MNetworkVarNames "GameTime_t m_flLastMoveTime"
// MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
// MNetworkVarNames "EClimbRopeState_t m_eClimbState"
class CCitadel_Ability_Climb_Rope : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x38]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b38[0x8]; // 0xb38
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b68[0x8]; // 0xb68
public:
	GameTime_t m_flActivatePressTime; // 0xb70	
	GameTime_t m_flDisconnectTime; // 0xb74	
	GameTime_t m_flClimbStartTime; // 0xb78	
	Vector m_vLastPos; // 0xb7c	
private:
	[[maybe_unused]] uint8_t __pad0b88[0x8]; // 0xb88
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestStopClimbing; // 0xb90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestJumpToRoof; // 0xb91	
private:
	[[maybe_unused]] uint8_t __pad0b92[0x2]; // 0xb92
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastMoveTime; // 0xb94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xb98	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xb9c	
};

