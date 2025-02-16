#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x15f0	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x1600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x17d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x18b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x1990	
	CSoundEventName m_strImpactSound; // 0x19a0	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x19b0	
	float m_flForwardBoostSpeed; // 0x19b4	
	float m_flUpBoostSpeed; // 0x19b8	
	float m_flBoostTurnRate; // 0x19bc	
	float m_flHoverTime; // 0x19c0	
	float m_flMinAimAngle; // 0x19c4	
	float m_flBoostGain; // 0x19c8	
	float m_flBoostTime; // 0x19cc	
	float m_flLandingTime; // 0x19d0	
	float m_flCrashSpeed; // 0x19d4	
	float m_flHoverInputSpeedMax; // 0x19d8	
	float m_flHoverInputAcceleration; // 0x19dc	
	float m_flHoverSpeedDecay; // 0x19e0	
};

