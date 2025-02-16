#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf38
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x268]; // 0xca0
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xf08	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xf14	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xf20	
private:
	[[maybe_unused]] uint8_t __pad0f21[0x3]; // 0xf21
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xf24	
};

