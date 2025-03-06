#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData
{
public:
	float m_flResupplyForceScale; // 0x15c8	
	float m_flResupplyUp; // 0x15cc	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strKilledSound; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x15e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // 0x17b0	
};

