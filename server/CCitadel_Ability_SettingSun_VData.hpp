#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // 0x16a0	
	float m_flSSCameraPreviewOffset; // 0x16b0	
	float m_flSSCameraPreviewSpeed; // 0x16b4	
	float m_flSSCameraPreviewDistance; // 0x16b8	
};

