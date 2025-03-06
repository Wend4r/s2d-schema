#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Trapper_WebWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallDestroyedParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallHitParticle; // 0x17a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWebWallCreated; // 0x1888	
	CSoundEventName m_strWebWallDestroyed; // 0x1898	
};

