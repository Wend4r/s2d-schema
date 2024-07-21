#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1928
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x1520	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1540	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x1550	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x1800	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x18e0	
	CSoundEventName m_strImpactSound; // 0x18f0	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x1900	
	float m_flForwardBoostSpeed; // 0x1904	
	float m_flUpBoostSpeed; // 0x1908	
	float m_flBoostTurnRate; // 0x190c	
	float m_flHoverTime; // 0x1910	
	float m_flMinAimAngle; // 0x1914	
	float m_flBoostGain; // 0x1918	
	float m_flBoostTime; // 0x191c	
	float m_flLandingTime; // 0x1920	
	float m_flCrashSpeed; // 0x1924	
};

