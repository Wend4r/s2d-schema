#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
class CCitadel_Ability_PassiveBeefy : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x18]; // 0xb00
public:
	GameTime_t m_flLastHealTime; // 0xb18	
};

