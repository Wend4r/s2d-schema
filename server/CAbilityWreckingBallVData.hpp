#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckingBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x16a8	
	CUtlString m_SummonParticleAttachment; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1790	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // 0x1870	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HoldingBallLoop; // 0x1880	
};

