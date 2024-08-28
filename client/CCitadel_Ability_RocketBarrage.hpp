#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1f8]; // 0xc28
public:
	float m_flCurrentTimeScale; // 0xe20	
	Vector m_vecAimPos; // 0xe24	
	Vector m_vecAimVel; // 0xe30	
	GameTime_t m_flLastUpdateTime; // 0xe3c	
};

