#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c98
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // 0x1910	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x19f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // 0x1ad0	
	float m_flVerticalCameraOffsetLerpTime; // 0x1bb0	
	float m_flVerticalCameraOffsetBias; // 0x1bb4	
	float m_flVerticalCameraOffset; // 0x1bb8	
	float m_flDistanceCameraOffsetLerpTime; // 0x1bbc	
	float m_flDistanceCameraOffsetBias; // 0x1bc0	
	float m_flDistanceCameraOffset; // 0x1bc4	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1bc8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1bd0	
	CSoundEventName m_EnterBallSound; // 0x1be0	
	CSoundEventName m_BallLoopSound; // 0x1bf0	
	CSoundEventName m_ExitBallSound; // 0x1c00	
	CSoundEventName m_WallImpactSound; // 0x1c10	
	CSoundEventName m_PlayerImpactSound; // 0x1c20	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1c30	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x1c40	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1c50	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1c60	
	float m_flTransformFromBallTime; // 0x1c64	
	float m_flAirTurnRatio; // 0x1c68	
	float m_flWallTurnRatioMax; // 0x1c6c	
	float m_flWallTurnRatioMin; // 0x1c70	
	float m_flTurnRatio; // 0x1c74	
	float m_flDefaultBallSpeed; // 0x1c78	
	float m_flFastBallSpeed; // 0x1c7c	
	float m_flSpeedAccel; // 0x1c80	
	float m_flSpeedDeccel; // 0x1c84	
	float m_flElasticity; // 0x1c88	
	float m_flWallCheckGroundOffset; // 0x1c8c	
	float m_flWallPauseTime; // 0x1c90	
	float m_flWallAngleMin; // 0x1c94	
};

