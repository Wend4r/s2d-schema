#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData
{
public:
	float m_flResupplyForceScale; // 0x14e0	
	float m_flResupplyUp; // 0x14e4	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strKilledSound; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x14f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // 0x16c8	
};

