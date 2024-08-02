#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_Blood_Rage : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aac[0x4]; // 0xaac
public:
	CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // 0xab0	
};

