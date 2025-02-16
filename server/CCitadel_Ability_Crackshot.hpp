#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
// Has VTable
class CCitadel_Ability_Crackshot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x4]; // 0xb00
public:
	ParticleIndex_t m_ReadyParticleIndex; // 0xb04	
};

