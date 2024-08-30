#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf8
// Has VTable
class CCitadel_Ability_Lash_Flog : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x118]; // 0xad8
public:
	ParticleIndex_t m_SandEffect; // 0xbf0	
};

