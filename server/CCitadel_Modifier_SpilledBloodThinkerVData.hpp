#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x6d0	
	float m_flHeight; // 0x6d4	
};

