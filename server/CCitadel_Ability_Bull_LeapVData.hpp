#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1908
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
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1540	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1700	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x17e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x18c0	
	CSoundEventName m_strImpactSound; // 0x18d0	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x18e0	
	float m_flForwardBoostSpeed; // 0x18e4	
	float m_flUpBoostSpeed; // 0x18e8	
	float m_flHoverTime; // 0x18ec	
	float m_flMinAimAngle; // 0x18f0	
	float m_flBoostGain; // 0x18f4	
	float m_flBoostTime; // 0x18f8	
	float m_flLandingTime; // 0x18fc	
	float m_flCrashSpeed; // 0x1900	
};

