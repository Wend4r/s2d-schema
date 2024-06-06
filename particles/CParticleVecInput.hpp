#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleFloatInput;
// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
// MClassIsParticleVec
// MParticleCustomFieldDefaultValue
class CParticleVecInput : public CParticleInput
{
public:
	ParticleVecType_t m_nType; // 0x10	
	Vector m_vLiteralValue; // 0x14	
	Color m_LiteralColor; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CParticleNamedValueRef m_NamedValue; // 0x28	
	bool m_bFollowNamedValue; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c	
	Vector m_vVectorAttributeScale; // 0x70	
	int32_t m_nControlPoint; // 0x7c	
	int32_t m_nDeltaControlPoint; // 0x80	
	Vector m_vCPValueScale; // 0x84	
	Vector m_vCPRelativePosition; // 0x90	
	Vector m_vCPRelativeDir; // 0x9c	
	CParticleFloatInput m_FloatComponentX; // 0xa8	
	CParticleFloatInput m_FloatComponentY; // 0x200	
	CParticleFloatInput m_FloatComponentZ; // 0x358	
	CParticleFloatInput m_FloatInterp; // 0x4b0	
	float m_flInterpInput0; // 0x608	
	float m_flInterpInput1; // 0x60c	
	Vector m_vInterpOutput0; // 0x610	
	Vector m_vInterpOutput1; // 0x61c	
	CColorGradient m_Gradient; // 0x628	
	Vector m_vRandomMin; // 0x640	
	Vector m_vRandomMax; // 0x64c	
};

