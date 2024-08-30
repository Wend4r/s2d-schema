#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNanoWarpVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16c0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16d0	
	// MPropertyStartGroup "Gameplay"
	float m_flWarpDistanceFromTarget; // 0x16e0	
};

