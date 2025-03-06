#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper2VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x15c8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x16a8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // 0x16c8	
};

