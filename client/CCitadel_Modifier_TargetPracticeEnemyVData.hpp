#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x958
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeEnemyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupCompleteModifier; // 0x668	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x678	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x688	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x768	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadParticle; // 0x848	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x928	
	CSoundEventName m_strTargetHeadShotHitSound; // 0x938	
	CSoundEventName m_strTargetCompleteSound; // 0x948	
};

