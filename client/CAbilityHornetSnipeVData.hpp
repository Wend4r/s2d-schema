#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1998
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1830	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x1910	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x1920	
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // 0x1930	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1940	
	CSoundEventName m_strZoomIn; // 0x1950	
	CSoundEventName m_strZoomOut; // 0x1960	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x1970	
	float m_flFadeToBlackTime; // 0x1974	
	float m_flFoVChangeTime; // 0x1978	
private:
	[[maybe_unused]] uint8_t __pad197c[0x4]; // 0x197c
public:
	CUtlVector< float32 > m_ScopeFoV; // 0x1980	
};

