#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
struct ParticleAttributeIndex_t;
struct CParticleCollectionRendererVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2718
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x208	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x360	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRollScale; // 0x4b8	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionRendererVecInput m_vecColorScale; // 0x618	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xc70	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xc74	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xc78	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xc80	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xdd8	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xf30	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xf34	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xf38	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xf50	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xf54	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f59[0x7]; // 0xf59
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xf60	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x10b8	
	// MPropertyFriendlyName "diffuse max contribution clamp"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1210	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x1368	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "m_nOrientationType == PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL || m_nOrientationType == PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x136c	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1370	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x1374	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x1375	
private:
	[[maybe_unused]] uint8_t __pad1376[0x2]; // 0x1376
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1378	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flDesaturation; // 0x14d0	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x1628	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1780	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1784	
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1788	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x18e0	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x18e1	
private:
	[[maybe_unused]] uint8_t __pad18e2[0x2]; // 0x18e2
public:
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x18e4	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x18e8	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x18ec	
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x18f0	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1a48	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1ba0	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1cf8	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1cf9	
private:
	[[maybe_unused]] uint8_t __pad1cfa[0x6]; // 0x1cfa
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1d00	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1e58	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1e5c	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1e60	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1e61	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1e62	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x1e63	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x1e64	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1ee4	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x1ee5	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1f65	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1f66	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1f67	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1f68	
private:
	[[maybe_unused]] uint8_t __pad1f69[0x3]; // 0x1f69
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1f6c	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1f70	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x20c8	
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x2220	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2378	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x24d0	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x24d4	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x24d5	
};

