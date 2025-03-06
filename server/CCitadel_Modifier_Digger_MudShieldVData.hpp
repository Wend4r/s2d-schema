#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Digger_MudShieldVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x818	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x8f8	
	CSoundEventName m_ImpactSound; // 0x908	
};

