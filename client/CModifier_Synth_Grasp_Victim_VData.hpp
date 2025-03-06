#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Grasp_Victim_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVictimTetheredSound; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GraspVictimParticle; // 0x668	
};

