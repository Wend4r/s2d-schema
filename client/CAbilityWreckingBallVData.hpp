#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckingBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x15d0	
	CUtlString m_SummonParticleAttachment; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x16b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // 0x1798	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HoldingBallLoop; // 0x17a8	
};

