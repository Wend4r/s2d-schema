#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xc28	
	// MNetworkEnable
	bool m_bAttackParried; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c2d[0x3]; // 0xc2d
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xc30	
};

