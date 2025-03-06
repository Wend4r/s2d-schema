#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gravity_Lasso_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoSelf; // 0x15c8	
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoTarget; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetWarningSound; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreCastParticle; // 0x15f8	
};

