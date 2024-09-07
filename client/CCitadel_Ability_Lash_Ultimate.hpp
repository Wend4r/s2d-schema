#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf08
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0dd8[0x2]; // 0xdd8
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xdda	
private:
	[[maybe_unused]] uint8_t __pad0ddb[0x1]; // 0xddb
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xddc	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xde0	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xde4	
};

