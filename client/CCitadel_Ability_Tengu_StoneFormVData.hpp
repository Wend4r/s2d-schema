#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1788	
	CSoundEventName m_strImpactSound; // 0x1798	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x17a8	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1888	
	float m_flRisingTime; // 0x188c	
};

