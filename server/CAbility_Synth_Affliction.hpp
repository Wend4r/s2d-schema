#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CAbility_Synth_Affliction : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x70]; // 0xaa8
public:
	ParticleIndex_t m_hAOEParticle; // 0xb18	
};

