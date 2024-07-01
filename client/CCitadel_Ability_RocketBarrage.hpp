#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x230]; // 0xc28
public:
	float m_flCurrentTimeScale; // 0xe58	
	Vector m_vecAimPos; // 0xe5c	
	Vector m_vecAimVel; // 0xe68	
	GameTime_t m_flLastUpdateTime; // 0xe74	
};

