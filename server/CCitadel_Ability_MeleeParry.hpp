#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xaa8	
	// MNetworkEnable
	bool m_bAttackParried; // 0xaac	
private:
	[[maybe_unused]] uint8_t __pad0aad[0x3]; // 0xaad
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xab0	
};

