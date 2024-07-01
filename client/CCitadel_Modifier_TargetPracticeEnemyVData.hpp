#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeEnemyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5e0	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupCompleteModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x6f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadParticle; // 0x7d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x8b0	
	CSoundEventName m_strTargetHeadShotHitSound; // 0x8c0	
	CSoundEventName m_strTargetCompleteSound; // 0x8d0	
};

