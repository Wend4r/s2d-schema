#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1998
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1868	
	CSoundEventName m_strImpactSound; // 0x1878	
	CSoundEventName m_strFallCollideImpactSound; // 0x1888	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1898	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x18a8	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1988	
	float m_flRisingTime; // 0x198c	
	float m_flCollideRadius; // 0x1990	
};

