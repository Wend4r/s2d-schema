#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1968
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1830	
	float m_ArrowOffsetX; // 0x1910	
	float m_ArrowCameraDistance; // 0x1914	
	float m_ArrowCameraHeightOffset; // 0x1918	
	float m_ArrowInitialPitch; // 0x191c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1920	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1930	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1940	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1950	
	float m_flSpeedAccel; // 0x1954	
	float m_flSpeedDeccel; // 0x1958	
	float m_flBaseProjectileSpeed; // 0x195c	
	float m_flMaxProjectileSpeed; // 0x1960	
};

