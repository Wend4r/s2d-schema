#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x150]; // 0xaa8
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xbf8	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xc04	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xc10	
private:
	[[maybe_unused]] uint8_t __pad0c11[0x3]; // 0xc11
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xc14	
};

