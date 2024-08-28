#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1f8]; // 0xab0
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xca8	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xcb4	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xcc4	
};

