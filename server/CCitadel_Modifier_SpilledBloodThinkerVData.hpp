#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // 0x658	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x738	
	float m_flHeight; // 0x73c	
};

