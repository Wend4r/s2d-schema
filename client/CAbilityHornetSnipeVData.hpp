#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1868	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x1948	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x1958	
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // 0x1968	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1978	
	CSoundEventName m_strZoomIn; // 0x1988	
	CSoundEventName m_strZoomOut; // 0x1998	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x19a8	
	float m_flFadeToBlackTime; // 0x19ac	
	float m_flFoVChangeTime; // 0x19b0	
private:
	[[maybe_unused]] uint8_t __pad19b4[0x4]; // 0x19b4
public:
	CUtlVector< float32 > m_ScopeFoV; // 0x19b8	
};

