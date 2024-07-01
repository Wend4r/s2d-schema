#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGooGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // 0x14f0	
	// MPropertyStartGroup "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // 0x15e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrenadeHitImpactSound; // 0x16c0	
	CSoundEventName m_GrenadeMissImpactSound; // 0x16d0	
};

