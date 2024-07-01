#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1780	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x1860	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x1870	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1880	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x1890	
	float m_flScopeTimeToFullPower; // 0x1894	
	float m_flScopeMinPowerFrac; // 0x1898	
	float m_flFadeToBlackTime; // 0x189c	
};

