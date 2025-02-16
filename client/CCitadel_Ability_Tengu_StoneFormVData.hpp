#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1960
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x1750	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1830	
	CSoundEventName m_strImpactSound; // 0x1840	
	CSoundEventName m_strFallCollideImpactSound; // 0x1850	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1860	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x1870	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1950	
	float m_flRisingTime; // 0x1954	
	float m_flCollideRadius; // 0x1958	
};

