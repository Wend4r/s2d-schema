#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1798
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_VoidSphereVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strCastEffect; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAllyPositionPreview; // 0x16b8	
};

