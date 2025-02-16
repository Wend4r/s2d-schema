#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
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
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b28[0x8]; // 0xb28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b58[0x8]; // 0xb58
public:
	GameTime_t m_flActivatePressTime; // 0xb60	
	GameTime_t m_flDisconnectTime; // 0xb64	
	GameTime_t m_flClimbStartTime; // 0xb68	
	Vector m_vLastPos; // 0xb6c	
private:
	[[maybe_unused]] uint8_t __pad0b78[0x8]; // 0xb78
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestStopClimbing; // 0xb80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestJumpToRoof; // 0xb81	
private:
	[[maybe_unused]] uint8_t __pad0b82[0x2]; // 0xb82
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastMoveTime; // 0xb84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xb88	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xb8c	
};

