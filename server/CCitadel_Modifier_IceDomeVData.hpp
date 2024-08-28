#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // 0x6d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x7b8	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // 0x7c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDomeEndSound; // 0x7d8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strTargetLoopingSound; // 0x7e8	
};

