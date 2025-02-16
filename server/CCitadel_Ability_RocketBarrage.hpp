#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c0]; // 0xb00
public:
	float m_flCurrentTimeScale; // 0xcc0	
	Vector m_vecAimPos; // 0xcc4	
	Vector m_vecAimVel; // 0xcd0	
	GameTime_t m_flLastUpdateTime; // 0xcdc	
};

