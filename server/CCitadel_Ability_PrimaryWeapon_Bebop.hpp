#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf88
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames "GameTime_t m_flStartFiringTime"
// MNetworkVarNames "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0b60[0x2a8]; // 0xb60
public:
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime; // 0xe08	
	// MNetworkEnable
	GameTime_t m_flStartFiringTime; // 0xe0c	
	// MNetworkEnable
	bool m_bFiring; // 0xe10	
};

