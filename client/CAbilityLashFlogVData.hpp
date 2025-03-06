#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashFlogVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogParticle; // 0x15c8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogLifeLeachParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitConfirmSound; // 0x1788	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlogDebuffModifier; // 0x1798	
};

