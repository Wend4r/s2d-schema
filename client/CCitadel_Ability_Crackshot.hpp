#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
// Has VTable
class CCitadel_Ability_Crackshot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x4]; // 0xc50
public:
	ParticleIndex_t m_ReadyParticleIndex; // 0xc54	
};

