#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xd78	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xd84	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xd94	
};

