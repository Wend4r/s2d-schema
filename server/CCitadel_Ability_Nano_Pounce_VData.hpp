#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a60
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_DoublePounceModifier; // 0x15c0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1870	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1950	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a30	
	CSoundEventName m_strExplodeSound; // 0x1a40	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a50	
	float m_flAttackTimePhase02; // 0x1a54	
	float m_flAllyMinTargetRange; // 0x1a58	
	float m_flTargetVerticalOffset; // 0x1a5c	
};

