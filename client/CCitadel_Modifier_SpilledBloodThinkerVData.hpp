#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // 0x5e0	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x6c0	
	float m_flHeight; // 0x6c4	
};

