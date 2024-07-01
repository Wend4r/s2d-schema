#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x15c0	
	CSoundEventName m_strCastDelayLocalPlayerSound; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x15f0	
};

