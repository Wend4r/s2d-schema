#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1cd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // 0x1948	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x1a28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // 0x1b08	
	float m_flVerticalCameraOffsetLerpTime; // 0x1be8	
	float m_flVerticalCameraOffsetBias; // 0x1bec	
	float m_flVerticalCameraOffset; // 0x1bf0	
	float m_flDistanceCameraOffsetLerpTime; // 0x1bf4	
	float m_flDistanceCameraOffsetBias; // 0x1bf8	
	float m_flDistanceCameraOffset; // 0x1bfc	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1c00	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1c08	
	CSoundEventName m_EnterBallSound; // 0x1c18	
	CSoundEventName m_BallLoopSound; // 0x1c28	
	CSoundEventName m_ExitBallSound; // 0x1c38	
	CSoundEventName m_WallImpactSound; // 0x1c48	
	CSoundEventName m_PlayerImpactSound; // 0x1c58	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1c68	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x1c78	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1c88	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1c98	
	float m_flTransformFromBallTime; // 0x1c9c	
	float m_flAirTurnRatio; // 0x1ca0	
	float m_flWallTurnRatioMax; // 0x1ca4	
	float m_flWallTurnRatioMin; // 0x1ca8	
	float m_flTurnRatio; // 0x1cac	
	float m_flDefaultBallSpeed; // 0x1cb0	
	float m_flFastBallSpeed; // 0x1cb4	
	float m_flSpeedAccel; // 0x1cb8	
	float m_flSpeedDeccel; // 0x1cbc	
	float m_flElasticity; // 0x1cc0	
	float m_flWallCheckGroundOffset; // 0x1cc4	
	float m_flWallPauseTime; // 0x1cc8	
	float m_flWallAngleMin; // 0x1ccc	
};

