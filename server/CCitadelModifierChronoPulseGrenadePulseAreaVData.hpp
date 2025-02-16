#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x638	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x648	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x818	
	CSoundEventName m_strArmedSound; // 0x828	
	CSoundEventName m_strLoopingSound; // 0x838	
	CSoundEventName m_strHitSound; // 0x848	
};

