#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a98
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_DoublePounceModifier; // 0x15f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x18a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1988	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a68	
	CSoundEventName m_strExplodeSound; // 0x1a78	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a88	
	float m_flAttackTimePhase02; // 0x1a8c	
	float m_flAllyMinTargetRange; // 0x1a90	
	float m_flTargetVerticalOffset; // 0x1a94	
};

