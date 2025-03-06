#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // 0x738	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x818	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // 0x828	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDomeEndSound; // 0x838	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strTargetLoopingSound; // 0x848	
};

