#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe50
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1f8]; // 0xc28
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xe20	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xe2c	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e39[0x3]; // 0xe39
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe3c	
};

