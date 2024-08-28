#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1658
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x14e8	
	float m_flMovementRestrictionTime; // 0x14ec	
	float m_flActiveTime; // 0x14f0	
	float m_flParryEndVisualTime; // 0x14f4	
	float m_flSuccessActiveTime; // 0x14f8	
	float m_flBossVictimNoMeleeTime; // 0x14fc	
	float m_flBossVictimCalmTime; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1504[0x4]; // 0x1504
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1508	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x15e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x15f8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x1618	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x1628	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // 0x1638	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // 0x1648	
};

