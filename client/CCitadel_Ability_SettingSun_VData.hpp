#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // 0x1788	
	float m_flSSCameraPreviewOffset; // 0x1798	
	float m_flSSCameraPreviewSpeed; // 0x179c	
	float m_flSSCameraPreviewDistance; // 0x17a0	
};

