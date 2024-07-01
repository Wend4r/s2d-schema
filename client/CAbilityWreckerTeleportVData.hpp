#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1780	
	float m_ArrowOffsetX; // 0x1860	
	float m_ArrowCameraDistance; // 0x1864	
	float m_ArrowCameraHeightOffset; // 0x1868	
	float m_ArrowInitialPitch; // 0x186c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1870	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1880	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1890	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x18a0	
	float m_flSpeedAccel; // 0x18a4	
	float m_flSpeedDeccel; // 0x18a8	
	float m_flBaseProjectileSpeed; // 0x18ac	
	float m_flMaxProjectileSpeed; // 0x18b0	
};

