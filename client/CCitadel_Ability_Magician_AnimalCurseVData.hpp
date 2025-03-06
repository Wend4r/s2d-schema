#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_AnimalCurseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_AirDampingModifier; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetWarningSound; // 0x15e8	
	CSoundEventName m_ProjectileHitConfirm; // 0x15f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x1608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetWarningParticle; // 0x16e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileExplodeParticle; // 0x17c8	
};

