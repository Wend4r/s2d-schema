#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper2VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x14f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x15d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // 0x15f0	
};

