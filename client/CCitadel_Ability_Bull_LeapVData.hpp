#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a20
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x1618	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1628	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x1638	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1808	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x18e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x19c8	
	CSoundEventName m_strImpactSound; // 0x19d8	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x19e8	
	float m_flForwardBoostSpeed; // 0x19ec	
	float m_flUpBoostSpeed; // 0x19f0	
	float m_flBoostTurnRate; // 0x19f4	
	float m_flHoverTime; // 0x19f8	
	float m_flMinAimAngle; // 0x19fc	
	float m_flBoostGain; // 0x1a00	
	float m_flBoostTime; // 0x1a04	
	float m_flLandingTime; // 0x1a08	
	float m_flCrashSpeed; // 0x1a0c	
	float m_flHoverInputSpeedMax; // 0x1a10	
	float m_flHoverInputAcceleration; // 0x1a14	
	float m_flHoverSpeedDecay; // 0x1a18	
};

