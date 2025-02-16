#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1870
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_AnimalCurseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_AirDampingModifier; // 0x15a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetWarningSound; // 0x15b0	
	CSoundEventName m_ProjectileHitConfirm; // 0x15c0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetWarningParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileExplodeParticle; // 0x1790	
};

