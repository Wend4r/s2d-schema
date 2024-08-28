#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNanoWarpVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16c8	
	// MPropertyStartGroup "Gameplay"
	float m_flWarpDistanceFromTarget; // 0x16d8	
};

