#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1930
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1548	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x1558	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x1808	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x18e8	
	CSoundEventName m_strImpactSound; // 0x18f8	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x1908	
	float m_flForwardBoostSpeed; // 0x190c	
	float m_flUpBoostSpeed; // 0x1910	
	float m_flBoostTurnRate; // 0x1914	
	float m_flHoverTime; // 0x1918	
	float m_flMinAimAngle; // 0x191c	
	float m_flBoostGain; // 0x1920	
	float m_flBoostTime; // 0x1924	
	float m_flLandingTime; // 0x1928	
	float m_flCrashSpeed; // 0x192c	
};

