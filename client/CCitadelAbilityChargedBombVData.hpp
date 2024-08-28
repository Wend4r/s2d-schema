#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x14e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d8	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x15e8	
	float m_flMinDamagePercent; // 0x15ec	
};

