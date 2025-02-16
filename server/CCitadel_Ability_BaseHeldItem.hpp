#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x38]; // 0xb00
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb38	
	GameTime_t m_tFirstPickupTime; // 0xb3c	
};

