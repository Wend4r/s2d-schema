#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1798
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMedicHealVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealBeamParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealTargetParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHealCastSound; // 0x1788	
};

