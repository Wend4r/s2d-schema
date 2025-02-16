#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a98
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x1590	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1618	
	float m_flCameraHoldAtExplosion; // 0x16a0	
	float m_flFadeToBlackTime; // 0x16a4	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x1868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1948	
	float m_ArrowOffsetX; // 0x1a28	
	float m_ArrowCameraDistance; // 0x1a2c	
	float m_ArrowCameraHeightOffset; // 0x1a30	
	float m_ArrowInitialPitch; // 0x1a34	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1a38	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1a48	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x1a58	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1a68	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1a78	
	float m_flSpeedAccel; // 0x1a7c	
	float m_flSpeedDeccel; // 0x1a80	
	float m_flBaseProjectileSpeed; // 0x1a84	
	float m_flMaxProjectileSpeed; // 0x1a88	
	float m_flArrowModelTurnSpringStrength; // 0x1a8c	
	float m_flKillCheckWindow; // 0x1a90	
	float m_flWorldCollideGraceWindow; // 0x1a94	
};

