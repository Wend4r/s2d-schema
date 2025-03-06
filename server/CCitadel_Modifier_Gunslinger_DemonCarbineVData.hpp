#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Gunslinger_DemonCarbineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FullyChargedParticle; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFullyCharged; // 0x818	
	CSoundEventName m_strShotSound; // 0x828	
};

