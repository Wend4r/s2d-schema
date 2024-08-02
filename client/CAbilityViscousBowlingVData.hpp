#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1948
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1780	
	float m_flVerticalCameraOffsetLerpTime; // 0x1860	
	float m_flVerticalCameraOffsetBias; // 0x1864	
	float m_flVerticalCameraOffset; // 0x1868	
	float m_flDistanceCameraOffsetLerpTime; // 0x186c	
	float m_flDistanceCameraOffsetBias; // 0x1870	
	float m_flDistanceCameraOffset; // 0x1874	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1878	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1880	
	CSoundEventName m_EnterBallSound; // 0x1890	
	CSoundEventName m_BallLoopSound; // 0x18a0	
	CSoundEventName m_ExitBallSound; // 0x18b0	
	CSoundEventName m_WallImpactSound; // 0x18c0	
	CSoundEventName m_PlayerImpactSound; // 0x18d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x18e0	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x18f0	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1900	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1910	
	float m_flTransformFromBallTime; // 0x1914	
	float m_flAirTurnRatio; // 0x1918	
	float m_flWallTurnRatio; // 0x191c	
	float m_flTurnRatio; // 0x1920	
	float m_flDefaultBallSpeed; // 0x1924	
	float m_flFastBallSpeed; // 0x1928	
	float m_flSpeedAccel; // 0x192c	
	float m_flSpeedDeccel; // 0x1930	
	float m_flElasticity; // 0x1934	
	float m_flWallCheckGroundOffset; // 0x1938	
	float m_flWallPauseTime; // 0x193c	
	float m_flWallAngleMin; // 0x1940	
};

