#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x16a8	
	CSoundEventName m_strCastDelayLocalPlayerSound; // 0x16b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x16d8	
};

