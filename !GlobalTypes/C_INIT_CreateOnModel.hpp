#pragma once

#include <cstdint>

struct CParticleModelInput;
struct CParticleTransformInput;
struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1288
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input model"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "input transform for transforming local space bias vector"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x220	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x288	
	// MPropertyFriendlyName "bias box distribution by volume"
	bool m_bScaleToVolume; // 0x28c	
	// MPropertyFriendlyName "even distribution within boxes"
	bool m_bEvenDistribution; // 0x28d	
private:
	[[maybe_unused]] uint8_t __pad028e[0x2]; // 0x28e
public:
	// MPropertyFriendlyName "desired hitbox"
	CParticleCollectionFloatInput m_nDesiredHitbox; // 0x290	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x3e8	
private:
	[[maybe_unused]] uint8_t __pad03ec[0x4]; // 0x3ec
public:
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x3f0	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0xa48	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0xa4c	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0xa50	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x10a8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0x1128	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1129	
	// MPropertyFriendlyName "Use renderable meshes instead of hitboxes"
	bool m_bUseMesh; // 0x112a	
private:
	[[maybe_unused]] uint8_t __pad112b[0x5]; // 0x112b
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x1130	
};

