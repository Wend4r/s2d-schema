#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe88
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1c0]; // 0xca0
public:
	float m_flCurrentTimeScale; // 0xe60	
	Vector m_vecAimPos; // 0xe64	
	Vector m_vecAimVel; // 0xe70	
	GameTime_t m_flLastUpdateTime; // 0xe7c	
};

