#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLightningBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLoopingSound; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x15f8	
};

