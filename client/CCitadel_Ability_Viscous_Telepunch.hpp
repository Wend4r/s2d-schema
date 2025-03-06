#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x268]; // 0xc50
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xeb8	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xec4	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xed4	
};

