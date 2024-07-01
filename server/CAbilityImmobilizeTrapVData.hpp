#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x1780	
	CSoundEventName m_strExplodeSound; // 0x1790	
	CSoundEventName m_strExpiredSound; // 0x17a0	
	CSoundEventName m_strImmobilizeTargetSound; // 0x17b0	
	CSoundEventName m_strArmingSound; // 0x17c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x17d0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x17e0	
	CEmbeddedSubclass< CCitadelModifier > m_DotModifier; // 0x17f0	
};

