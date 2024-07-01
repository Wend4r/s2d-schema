#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Chrono_KineticCarbineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FullyChargedParticle; // 0x6c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFullyCharged; // 0x7a0	
	CSoundEventName m_strShotSound; // 0x7b0	
};

