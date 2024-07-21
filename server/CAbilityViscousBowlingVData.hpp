#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x15c0	
	float m_flVerticalCameraOffsetLerpTime; // 0x16a0	
	float m_flVerticalCameraOffsetBias; // 0x16a4	
	float m_flVerticalCameraOffset; // 0x16a8	
	float m_flDistanceCameraOffsetLerpTime; // 0x16ac	
	float m_flDistanceCameraOffsetBias; // 0x16b0	
	float m_flDistanceCameraOffset; // 0x16b4	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x16c0	
	CSoundEventName m_BallJumpSound; // 0x16d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x16e0	
	CEmbeddedSubclass< CCitadelModifier > m_HitTrackerModifier; // 0x16f0	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1700	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1710	
	float m_flTransformFromBallTime; // 0x1714	
};

