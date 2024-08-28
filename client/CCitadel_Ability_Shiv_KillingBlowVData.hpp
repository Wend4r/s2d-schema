#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // 0x1508	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1518	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // 0x17b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ChargeUpSound; // 0x1898	
	CSoundEventName m_OnKillSound; // 0x18a8	
	// MPropertyStartGroup "+Killing Blow Params"
	float m_flPreArrivalAttackStartTime; // 0x18b8	
	float m_flKillableGlowRange; // 0x18bc	
	float m_flGlowMinTime; // 0x18c0	
};

