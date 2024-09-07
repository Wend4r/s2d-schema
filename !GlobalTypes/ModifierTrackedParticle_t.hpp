#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ModifierTrackedParticle_t
{
public:
	ParticleIndex_t m_nParticleIndex; // 0x0	
	bool m_bDestroyImmediately; // 0x4	
	bool m_bStatusEffect; // 0x5	
	bool m_bScreenSpace; // 0x6	
private:
	[[maybe_unused]] uint8_t __pad0007[0x1]; // 0x7
public:
	int16_t m_nStatusEffectPriority; // 0x8	
};

