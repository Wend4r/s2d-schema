#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x1c0]; // 0xaa8
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xc68	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xc74	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xc80	
private:
	[[maybe_unused]] uint8_t __pad0c81[0x3]; // 0xc81
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xc84	
};

