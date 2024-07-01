#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // 0x7a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // 0x880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x960	
	CSoundEventName m_strTargetingCompletedSound; // 0x970	
};

