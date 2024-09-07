#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
// Has VTable
class CCitadel_Ability_Lash_Flog : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x118]; // 0xc60
public:
	ParticleIndex_t m_SandEffect; // 0xd78	
};

