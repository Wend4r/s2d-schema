#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1f8]; // 0xab0
public:
	float m_flCurrentTimeScale; // 0xca8	
	Vector m_vecAimPos; // 0xcac	
	Vector m_vecAimVel; // 0xcb8	
	GameTime_t m_flLastUpdateTime; // 0xcc4	
};

