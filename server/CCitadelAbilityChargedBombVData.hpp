#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16b8	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x16c8	
	float m_flMinDamagePercent; // 0x16cc	
};

