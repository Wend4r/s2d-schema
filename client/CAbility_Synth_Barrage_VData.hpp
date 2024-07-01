#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Barrage_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLaunchSound; // 0x17b0	
};

