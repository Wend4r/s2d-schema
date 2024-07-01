#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1888
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1780	
	CSoundEventName m_strImpactSound; // 0x1790	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x17a0	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1880	
	float m_flRisingTime; // 0x1884	
};

