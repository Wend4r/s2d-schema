#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1980
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // 0x1830	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x1910	
	CSoundEventName m_strExplodeSound; // 0x1920	
	CSoundEventName m_strExpiredSound; // 0x1930	
	CSoundEventName m_strImmobilizeTargetSound; // 0x1940	
	CSoundEventName m_strArmingSound; // 0x1950	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // 0x1960	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1970	
};

