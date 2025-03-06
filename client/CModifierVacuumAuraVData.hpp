#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x950
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVacuumAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinishParticle; // 0x6a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AlliedParticle; // 0x780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyParticle; // 0x860	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x940	
};

