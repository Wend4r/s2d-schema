#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility
{
public:
	bool m_bProjectileActive; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0xaf]; // 0xaa9
public:
	GameTime_t m_LastThinkTime; // 0xb58	
	bool m_bWasSelected; // 0xb5c	
};

