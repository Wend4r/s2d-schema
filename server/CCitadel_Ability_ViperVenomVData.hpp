#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViperVenomVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_VenomModifier; // 0x15a0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastVenomParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VenomExplodeParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVenomWeakExplode; // 0x1770	
	CSoundEventName m_strVenomExplode; // 0x1780	
	CSoundEventName m_strVenomStrongExplode; // 0x1790	
};

