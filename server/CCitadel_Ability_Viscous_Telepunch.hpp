#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x1f8]; // 0xad8
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xcd0	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xcdc	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0ce9[0x3]; // 0xce9
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xcec	
};

