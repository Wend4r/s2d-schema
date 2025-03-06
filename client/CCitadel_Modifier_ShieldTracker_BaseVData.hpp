#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShieldTracker_BaseVData : public CCitadelModifierVData
{
public:
	float m_flShieldImpactEffectDuration; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x660	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldImpactModifier; // 0x740	
	// MPropertyDescription "What type of shield is this."
	EShieldType_t eShieldType; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x3]; // 0x751
public:
	// MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
	float flCooldownOnDamage; // 0x754	
	// MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
	float flCooldownOnBreak; // 0x758	
	// MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
	float flRegenDuration; // 0x75c	
};

