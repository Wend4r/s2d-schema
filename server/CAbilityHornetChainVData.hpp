#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetChainVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x15e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x15f0	
};

