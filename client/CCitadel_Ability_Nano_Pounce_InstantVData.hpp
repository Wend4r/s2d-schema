#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a50
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15b0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1860	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1940	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a20	
	CSoundEventName m_strExplodeSound; // 0x1a30	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a40	
	float m_flAttackTimePhase02; // 0x1a44	
	float m_flAllyMinTargetRange; // 0x1a48	
	float m_flTargetVerticalOffset; // 0x1a4c	
};

