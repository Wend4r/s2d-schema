#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMedicHealVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealBeamParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealTargetParticle; // 0x15d0	
	CGlobalSymbol m_sHealAnimParam; // 0x16b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHealCastSound; // 0x16b8	
};

