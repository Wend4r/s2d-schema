#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1818
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x15c8	
	float m_flMovementRestrictionTime; // 0x15cc	
	float m_flActiveTime; // 0x15d0	
	float m_flParryEndVisualTime; // 0x15d4	
	float m_flSuccessActiveTime; // 0x15d8	
	float m_flBossVictimNoMeleeTime; // 0x15dc	
	float m_flBossVictimCalmTime; // 0x15e0	
private:
	[[maybe_unused]] uint8_t __pad15e4[0x4]; // 0x15e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // 0x16c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x17a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x17b8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x17c8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x17d8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x17e8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // 0x17f8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // 0x1808	
};

