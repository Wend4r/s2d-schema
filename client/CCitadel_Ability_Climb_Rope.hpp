#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
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
private:
	[[maybe_unused]] uint8_t __pad0c50[0x38]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x8]; // 0xcb0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x8]; // 0xce0
public:
	GameTime_t m_flActivatePressTime; // 0xce8	
	GameTime_t m_flDisconnectTime; // 0xcec	
	GameTime_t m_flClimbStartTime; // 0xcf0	
	Vector m_vLastPos; // 0xcf4	
private:
	[[maybe_unused]] uint8_t __pad0d00[0x8]; // 0xd00
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestStopClimbing; // 0xd08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestJumpToRoof; // 0xd09	
private:
	[[maybe_unused]] uint8_t __pad0d0a[0x2]; // 0xd0a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastMoveTime; // 0xd0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xd10	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xd14	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x4]; // 0xd18
public:
	int32_t m_ClimbCount; // 0xd1c	
};

