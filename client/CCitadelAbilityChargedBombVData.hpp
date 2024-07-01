#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d0	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x15e0	
	float m_flMinDamagePercent; // 0x15e4	
};

