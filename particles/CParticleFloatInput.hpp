#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MClassIsParticleFloat
// MParticleCustomFieldDefaultValue
class CParticleFloatInput : public CParticleInput
{
public:
	ParticleFloatType_t m_nType; // 0x10	
	ParticleFloatMapType_t m_nMapType; // 0x14	
	float m_flLiteralValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CParticleNamedValueRef m_NamedValue; // 0x20	
	int32_t m_nControlPoint; // 0x60	
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x64	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x68	
	int32_t m_nVectorComponent; // 0x6c	
	float m_flRandomMin; // 0x70	
	float m_flRandomMax; // 0x74	
	bool m_bHasRandomSignFlip; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	int32_t m_nRandomSeed; // 0x7c	
	ParticleFloatRandomMode_t m_nRandomMode; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	float m_flLOD0; // 0x88	
	float m_flLOD1; // 0x8c	
	float m_flLOD2; // 0x90	
	float m_flLOD3; // 0x94	
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x98	
	float m_flNoiseOutputMin; // 0x9c	
	float m_flNoiseOutputMax; // 0xa0	
	float m_flNoiseScale; // 0xa4	
	Vector m_vecNoiseOffsetRate; // 0xa8	
	float m_flNoiseOffset; // 0xb4	
	int32_t m_nNoiseOctaves; // 0xb8	
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xbc	
	PFNoiseType_t m_nNoiseType; // 0xc0	
	PFNoiseModifier_t m_nNoiseModifier; // 0xc4	
	float m_flNoiseTurbulenceScale; // 0xc8	
	float m_flNoiseTurbulenceMix; // 0xcc	
	float m_flNoiseImgPreviewScale; // 0xd0	
	bool m_bNoiseImgPreviewLive; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0xb]; // 0xd5
public:
	float m_flNoCameraFallback; // 0xe0	
	bool m_bUseBoundsCenter; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00e5[0x3]; // 0xe5
public:
	ParticleFloatInputMode_t m_nInputMode; // 0xe8	
	float m_flMultFactor; // 0xec	
	float m_flInput0; // 0xf0	
	float m_flInput1; // 0xf4	
	float m_flOutput0; // 0xf8	
	float m_flOutput1; // 0xfc	
	float m_flNotchedRangeMin; // 0x100	
	float m_flNotchedRangeMax; // 0x104	
	float m_flNotchedOutputOutside; // 0x108	
	float m_flNotchedOutputInside; // 0x10c	
	ParticleFloatRoundType_t m_nRoundType; // 0x110	
	ParticleFloatBiasType_t m_nBiasType; // 0x114	
	float m_flBiasParameter; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CPiecewiseCurve m_Curve; // 0x120	
};

