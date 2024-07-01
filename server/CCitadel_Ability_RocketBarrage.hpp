#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
// Has VTable
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x230]; // 0xaa8
public:
	float m_flCurrentTimeScale; // 0xcd8	
	Vector m_vecAimPos; // 0xcdc	
	Vector m_vecAimVel; // 0xce8	
	GameTime_t m_flLastUpdateTime; // 0xcf4	
};

