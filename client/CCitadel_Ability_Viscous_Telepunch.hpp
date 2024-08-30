#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1f8]; // 0xc50
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xe48	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xe54	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e61[0x3]; // 0xe61
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe64	
};

