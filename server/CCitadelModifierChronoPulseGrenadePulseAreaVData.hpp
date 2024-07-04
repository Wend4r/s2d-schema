#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // 0x6f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x7d0	
	CSoundEventName m_strArmedSound; // 0x7e0	
	CSoundEventName m_strLoopingSound; // 0x7f0	
	CSoundEventName m_strHitSound; // 0x800	
};

