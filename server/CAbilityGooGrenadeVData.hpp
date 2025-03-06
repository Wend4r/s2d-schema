#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGooGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // 0x15d8	
	// MPropertyStartGroup "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // 0x16c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrenadeHitImpactSound; // 0x17a8	
	CSoundEventName m_GrenadeMissImpactSound; // 0x17b8	
	// MPropertyStartGroup "BounceSettings"
	float m_flMinRestitution; // 0x17c8	
	float m_flMaxRestitution; // 0x17cc	
};

