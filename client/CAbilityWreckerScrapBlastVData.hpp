#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1798
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerScrapBlastVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1788	
};

