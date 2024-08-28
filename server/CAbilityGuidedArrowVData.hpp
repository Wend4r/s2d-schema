#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x14e8	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1568	
	float m_flCameraHoldAtExplosion; // 0x15e8	
	float m_flFadeToBlackTime; // 0x15ec	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x17b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1890	
	float m_ArrowOffsetX; // 0x1970	
	float m_ArrowCameraDistance; // 0x1974	
	float m_ArrowCameraHeightOffset; // 0x1978	
	float m_ArrowInitialPitch; // 0x197c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1980	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1990	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x19a0	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x19b0	
	float m_flSpeedAccel; // 0x19b4	
	float m_flSpeedDeccel; // 0x19b8	
	float m_flBaseProjectileSpeed; // 0x19bc	
	float m_flMaxProjectileSpeed; // 0x19c0	
	float m_flArrowModelTurnSpringStrength; // 0x19c4	
};

