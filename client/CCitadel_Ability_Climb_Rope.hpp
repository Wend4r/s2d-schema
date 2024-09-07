#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd30
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
	[[maybe_unused]] uint8_t __pad0c60[0x38]; // 0xc60
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x8]; // 0xcf0
public:
	GameTime_t m_flActivatePressTime; // 0xcf8	
	GameTime_t m_flDisconnectTime; // 0xcfc	
	GameTime_t m_flClimbStartTime; // 0xd00	
	Vector m_vLastPos; // 0xd04	
private:
	[[maybe_unused]] uint8_t __pad0d10[0x8]; // 0xd10
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestStopClimbing; // 0xd18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bRequestJumpToRoof; // 0xd19	
private:
	[[maybe_unused]] uint8_t __pad0d1a[0x2]; // 0xd1a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastMoveTime; // 0xd1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xd20	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xd24	
private:
	[[maybe_unused]] uint8_t __pad0d28[0x4]; // 0xd28
public:
	int32_t m_ClimbCount; // 0xd2c	
};

