#pragma once

#include <cstdint>

struct ModifierTrackedParticle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CTrackedObject_MODIFIER_TRACKED_PARTICLE : public IModifierTrackedObject
{
public:
	// -> m_nParticleIndex - 0x8
	// -> m_bDestroyImmediately - 0xc
	// -> m_bStatusEffect - 0xd
	// -> m_bScreenSpace - 0xe
	// -> m_nStatusEffectPriority - 0x10
	ModifierTrackedParticle_t m_objectData; // 0x8	
};

