#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // 0x8f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x9d8	
	CSoundEventName m_strTargetingCompletedSound; // 0x9e8	
};

