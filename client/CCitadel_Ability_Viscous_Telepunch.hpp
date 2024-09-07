#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe88
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xe58	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xe64	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xe70	
private:
	[[maybe_unused]] uint8_t __pad0e71[0x3]; // 0xe71
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe74	
};

