#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x14e0	
	float m_flMovementRestrictionTime; // 0x14e4	
	float m_flActiveTime; // 0x14e8	
	float m_flParryEndVisualTime; // 0x14ec	
	float m_flSuccessActiveTime; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x14f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x15d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x15f8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x1618	
};

