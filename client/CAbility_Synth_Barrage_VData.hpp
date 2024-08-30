#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Barrage_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x1520	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLaunchSound; // 0x17c0	
};

