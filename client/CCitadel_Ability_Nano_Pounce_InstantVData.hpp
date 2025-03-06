#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a88
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1898	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1978	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a58	
	CSoundEventName m_strExplodeSound; // 0x1a68	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a78	
	float m_flAttackTimePhase02; // 0x1a7c	
	float m_flAllyMinTargetRange; // 0x1a80	
	float m_flTargetVerticalOffset; // 0x1a84	
};

