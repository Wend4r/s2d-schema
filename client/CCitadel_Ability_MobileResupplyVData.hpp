#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData
{
public:
	float m_flResupplyForceScale; // 0x14f0	
	float m_flResupplyUp; // 0x14f4	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strKilledSound; // 0x14f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x1508	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // 0x1518	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // 0x16d8	
};

