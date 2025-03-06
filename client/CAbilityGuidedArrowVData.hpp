#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1ad0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x15c8	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1650	
	float m_flCameraHoldAtExplosion; // 0x16d8	
	float m_flFadeToBlackTime; // 0x16dc	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x16e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x17c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x18a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1980	
	float m_ArrowOffsetX; // 0x1a60	
	float m_ArrowCameraDistance; // 0x1a64	
	float m_ArrowCameraHeightOffset; // 0x1a68	
	float m_ArrowInitialPitch; // 0x1a6c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1a70	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1a80	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x1a90	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1aa0	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1ab0	
	float m_flSpeedAccel; // 0x1ab4	
	float m_flSpeedDeccel; // 0x1ab8	
	float m_flBaseProjectileSpeed; // 0x1abc	
	float m_flMaxProjectileSpeed; // 0x1ac0	
	float m_flArrowModelTurnSpringStrength; // 0x1ac4	
	float m_flKillCheckWindow; // 0x1ac8	
	float m_flWorldCollideGraceWindow; // 0x1acc	
};

