#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViperVenomVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_VenomModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastVenomParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VenomExplodeParticle; // 0x16c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVenomWeakExplode; // 0x17a8	
	CSoundEventName m_strVenomExplode; // 0x17b8	
	CSoundEventName m_strVenomStrongExplode; // 0x17c8	
};

