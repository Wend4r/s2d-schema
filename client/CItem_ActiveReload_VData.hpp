#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1818
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_ActiveReload_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // 0x1610	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessSound; // 0x1620	
	CSoundEventName m_strFailureSound; // 0x1630	
	CSoundEventName m_strWindowEnteredSound; // 0x1640	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // 0x1730	
	// MPropertyStartGroup "Gameplay"
	float m_flGraceTime; // 0x1810	
};

