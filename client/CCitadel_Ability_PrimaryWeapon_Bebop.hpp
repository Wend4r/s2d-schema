#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1130
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames "GameTime_t m_flStartFiringTime"
// MNetworkVarNames "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d08[0x2a8]; // 0xd08
public:
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime; // 0xfb0	
	// MNetworkEnable
	GameTime_t m_flStartFiringTime; // 0xfb4	
	// MNetworkEnable
	bool m_bFiring; // 0xfb8	
};

