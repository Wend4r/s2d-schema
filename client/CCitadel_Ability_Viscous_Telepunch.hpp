#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xde8	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xdf4	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e01[0x3]; // 0xe01
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe04	
};

