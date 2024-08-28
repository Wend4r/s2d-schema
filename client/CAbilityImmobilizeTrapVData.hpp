#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x1868	
	CSoundEventName m_strExplodeSound; // 0x1878	
	CSoundEventName m_strExpiredSound; // 0x1888	
	CSoundEventName m_strImmobilizeTargetSound; // 0x1898	
	CSoundEventName m_strArmingSound; // 0x18a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x18b8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x18c8	
	CEmbeddedSubclass< CCitadelModifier > m_DotModifier; // 0x18d8	
};

