#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x38]; // 0xc28
public:
	GameTime_t m_LastThinkTime; // 0xc60	
	bool m_bWasSelected; // 0xc64	
};

