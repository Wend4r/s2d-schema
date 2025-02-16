#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
class CCitadel_Ability_Crackshot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x4]; // 0xca0
public:
	ParticleIndex_t m_ReadyParticleIndex; // 0xca4	
};

