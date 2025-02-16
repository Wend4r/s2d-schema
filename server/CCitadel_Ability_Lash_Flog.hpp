#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
class CCitadel_Ability_Lash_Flog : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	ParticleIndex_t m_SandEffect; // 0xc18	
};

