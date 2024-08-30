#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGooGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // 0x1500	
	// MPropertyStartGroup "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // 0x15f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrenadeHitImpactSound; // 0x16d0	
	CSoundEventName m_GrenadeMissImpactSound; // 0x16e0	
	// MPropertyStartGroup "BounceSettings"
	float m_flMinRestitution; // 0x16f0	
	float m_flMaxRestitution; // 0x16f4	
};

