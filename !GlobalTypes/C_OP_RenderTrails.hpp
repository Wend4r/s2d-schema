#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4188
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2ee0	
private:
	[[maybe_unused]] uint8_t __pad2ee1[0x3]; // 0x2ee1
public:
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2ee4	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2ee8	
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x2eec	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x2ef0	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x2ef4	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x2ef8	
private:
	[[maybe_unused]] uint8_t __pad2ef9[0x3]; // 0x2ef9
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x2efc	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2f00	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2f04	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2f08	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x3068	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x36e0	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x3840	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x39a0	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x4018	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x4178	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x417c	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x4180	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x4184	
};

