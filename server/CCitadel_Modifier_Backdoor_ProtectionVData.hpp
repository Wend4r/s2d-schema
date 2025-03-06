#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Backdoor_ProtectionVData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "How long this modifier must be alive before backdoor protection is activated"
	float m_flActivationTime; // 0x658	
	// MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
	// MPropertyAttributeRange "0 100"
	float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x65c	
	// MPropertyDescription "How health per second does backdoor protection regen?"
	float m_flHealthPerSecondRegen; // 0x660	
	// MPropertyDescription "How health per second when out of combat?"
	float m_flOutOfCombatHealthRegen; // 0x664	
	// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
	float m_flOutOfCombatRegenDelay; // 0x668	
	// MPropertyDescription "How long the shield effect lingers after having taken damage"
	float m_flEffectsLingerTime; // 0x66c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldActiveParticle; // 0x750	
	CUtlString m_strActiveEffectConfigName; // 0x830	
	float flShieldImpactDirectionOffset; // 0x838	
};

