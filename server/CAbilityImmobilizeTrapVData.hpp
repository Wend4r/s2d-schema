#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // 0x1868	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x1948	
	CSoundEventName m_strExplodeSound; // 0x1958	
	CSoundEventName m_strExpiredSound; // 0x1968	
	CSoundEventName m_strImmobilizeTargetSound; // 0x1978	
	CSoundEventName m_strArmingSound; // 0x1988	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // 0x1998	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x19a8	
};

