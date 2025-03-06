#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x17b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // 0x1898	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ChargeUpSound; // 0x1978	
	CSoundEventName m_OnKillSound; // 0x1988	
	// MPropertyStartGroup "+Killing Blow Params"
	float m_flPreArrivalAttackStartTime; // 0x1998	
	float m_flKillableGlowRange; // 0x199c	
	float m_flGlowMinTime; // 0x19a0	
};

