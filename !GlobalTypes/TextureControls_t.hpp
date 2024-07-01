#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x988
// 
// MGetKV3ClassDefaults
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x158	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2b0	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x408	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x560	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6b8	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionRendererFloatInput m_flDistortion; // 0x810	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x968	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x969	
private:
	[[maybe_unused]] uint8_t __pad096a[0x2]; // 0x96a
public:
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x96c	
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x970	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x974	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x978	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x97c	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x980	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x984	
};

