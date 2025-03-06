#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Barrage_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x17b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLaunchSound; // 0x1898	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackInterval; // 0x18a8	
};

