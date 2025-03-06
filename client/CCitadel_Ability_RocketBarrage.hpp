#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1c0]; // 0xc50
public:
	float m_flCurrentTimeScale; // 0xe10	
	Vector m_vecAimPos; // 0xe14	
	Vector m_vecAimVel; // 0xe20	
	GameTime_t m_flLastUpdateTime; // 0xe2c	
};

