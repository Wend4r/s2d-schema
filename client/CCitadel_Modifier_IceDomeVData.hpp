#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // 0x6c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x7a0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDomeEndSound; // 0x7c0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strTargetLoopingSound; // 0x7d0	
};

