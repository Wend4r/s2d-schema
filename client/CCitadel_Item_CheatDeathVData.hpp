#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_CheatDeathVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // 0x16f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sHealPulseSound; // 0x17d0	
	CSoundEventName m_sHealAndDamagePulseSound; // 0x17e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // 0x17f0	
};

