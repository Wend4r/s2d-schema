#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReturnFireVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritReflectTracerReplacement; // 0x818	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x8f8	
	CSoundEventName m_strHitProcSound; // 0x908	
};

