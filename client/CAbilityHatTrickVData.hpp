#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
struct ProjectileInfo_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1ca8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHatTrickVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraTransitionBackToHero; // 0x14e0	
	float m_flCameraHoldAfterActivate; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HatTrickChannelParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1808	
	float m_ArrowOffsetX; // 0x18e8	
	float m_ArrowCameraDistance; // 0x18ec	
	float m_ArrowCameraHeightOffset; // 0x18f0	
	float m_ArrowInitialPitch; // 0x18f4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x18f8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1908	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1918	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1928	
	float m_flSpeedAccel; // 0x192c	
	float m_flSpeedDeccel; // 0x1930	
	float m_flBaseProjectileSpeed; // 0x1934	
	ProjectileInfo_t m_activatedProjectile; // 0x1938	
};

