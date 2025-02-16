#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x268]; // 0xb00
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xd68	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xd74	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d81[0x3]; // 0xd81
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xd84	
};

