#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1868	
	float m_ArrowOffsetX; // 0x1948	
	float m_ArrowCameraDistance; // 0x194c	
	float m_ArrowCameraHeightOffset; // 0x1950	
	float m_ArrowInitialPitch; // 0x1954	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1958	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1968	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1978	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1988	
	float m_flSpeedAccel; // 0x198c	
	float m_flSpeedDeccel; // 0x1990	
	float m_flBaseProjectileSpeed; // 0x1994	
	float m_flMaxProjectileSpeed; // 0x1998	
};

