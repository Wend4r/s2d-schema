#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x14f0	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1570	
	float m_flCameraHoldAtExplosion; // 0x15f0	
	float m_flFadeToBlackTime; // 0x15f4	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x17b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1898	
	float m_ArrowOffsetX; // 0x1978	
	float m_ArrowCameraDistance; // 0x197c	
	float m_ArrowCameraHeightOffset; // 0x1980	
	float m_ArrowInitialPitch; // 0x1984	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1988	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1998	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x19a8	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x19b8	
	float m_flSpeedAccel; // 0x19bc	
	float m_flSpeedDeccel; // 0x19c0	
	float m_flBaseProjectileSpeed; // 0x19c4	
	float m_flMaxProjectileSpeed; // 0x19c8	
	float m_flArrowModelTurnSpringStrength; // 0x19cc	
};

