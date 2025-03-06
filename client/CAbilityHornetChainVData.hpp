#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetChainVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16a8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x16b8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x16c8	
};

