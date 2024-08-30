#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // 0x16b0	
	float m_flSSCameraPreviewOffset; // 0x16c0	
	float m_flSSCameraPreviewSpeed; // 0x16c4	
	float m_flSSCameraPreviewDistance; // 0x16c8	
};

