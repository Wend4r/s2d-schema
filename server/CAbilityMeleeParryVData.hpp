#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x1590	
	float m_flMovementRestrictionTime; // 0x1594	
	float m_flActiveTime; // 0x1598	
	float m_flParryEndVisualTime; // 0x159c	
	float m_flSuccessActiveTime; // 0x15a0	
	float m_flBossVictimNoMeleeTime; // 0x15a4	
	float m_flBossVictimCalmTime; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15ac[0x4]; // 0x15ac
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x1770	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x1780	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1790	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x17a0	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x17b0	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // 0x17c0	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // 0x17d0	
};

