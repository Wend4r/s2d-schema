#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem
{
public:
	int32_t m_nGold; // 0xb40	
	float m_flAmberTime; // 0xb44	
	float m_flSapphireTime; // 0xb48	
	GameTime_t m_tAbilityCreateTime; // 0xb4c	
	GameTime_t m_tLastDamageTime; // 0xb50	
private:
	[[maybe_unused]] uint8_t __pad0b54[0x4]; // 0xb54
public:
	Vector m_vHomePosition; // 0xb58	
};

