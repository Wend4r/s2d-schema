#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x15e0	
};

