#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1bf0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // 0x1868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x1948	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // 0x1a28	
	float m_flVerticalCameraOffsetLerpTime; // 0x1b08	
	float m_flVerticalCameraOffsetBias; // 0x1b0c	
	float m_flVerticalCameraOffset; // 0x1b10	
	float m_flDistanceCameraOffsetLerpTime; // 0x1b14	
	float m_flDistanceCameraOffsetBias; // 0x1b18	
	float m_flDistanceCameraOffset; // 0x1b1c	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1b20	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1b28	
	CSoundEventName m_EnterBallSound; // 0x1b38	
	CSoundEventName m_BallLoopSound; // 0x1b48	
	CSoundEventName m_ExitBallSound; // 0x1b58	
	CSoundEventName m_WallImpactSound; // 0x1b68	
	CSoundEventName m_PlayerImpactSound; // 0x1b78	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1b88	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x1b98	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1ba8	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1bb8	
	float m_flTransformFromBallTime; // 0x1bbc	
	float m_flAirTurnRatio; // 0x1bc0	
	float m_flWallTurnRatio; // 0x1bc4	
	float m_flTurnRatio; // 0x1bc8	
	float m_flDefaultBallSpeed; // 0x1bcc	
	float m_flFastBallSpeed; // 0x1bd0	
	float m_flSpeedAccel; // 0x1bd4	
	float m_flSpeedDeccel; // 0x1bd8	
	float m_flElasticity; // 0x1bdc	
	float m_flWallCheckGroundOffset; // 0x1be0	
	float m_flWallPauseTime; // 0x1be4	
	float m_flWallAngleMin; // 0x1be8	
};

