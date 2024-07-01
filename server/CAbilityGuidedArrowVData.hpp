#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x14e0	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1560	
	float m_flCameraHoldAtExplosion; // 0x15e0	
	float m_flFadeToBlackTime; // 0x15e4	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1888	
	float m_ArrowOffsetX; // 0x1968	
	float m_ArrowCameraDistance; // 0x196c	
	float m_ArrowCameraHeightOffset; // 0x1970	
	float m_ArrowInitialPitch; // 0x1974	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1978	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1988	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1998	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x19a8	
	float m_flSpeedAccel; // 0x19ac	
	float m_flSpeedDeccel; // 0x19b0	
	float m_flBaseProjectileSpeed; // 0x19b4	
	float m_flMaxProjectileSpeed; // 0x19b8	
};

