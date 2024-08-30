#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLightningBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLoopingSound; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x1520	
};

