#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
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
	CNetworkOriginQuantizedVector m_vTop; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x8]; // 0xc78
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xc80	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x8]; // 0xca8
public:
	GameTime_t m_flActivatePressTime; // 0xcb0	
	GameTime_t m_flDisconnectTime; // 0xcb4	
	GameTime_t m_flClimbStartTime; // 0xcb8	
	Vector m_vLastPos; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestStopClimbing; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestJumpToRoof; // 0xcd1	
private:
	[[maybe_unused]] uint8_t __pad0cd2[0x2]; // 0xcd2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastMoveTime; // 0xcd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xcd8	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xcdc	
};

