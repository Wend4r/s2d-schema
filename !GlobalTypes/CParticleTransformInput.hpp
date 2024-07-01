#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor
// MClassIsParticleTransform
// MParticleCustomFieldDefaultValue
class CParticleTransformInput : public CParticleInput
{
public:
	ParticleTransformType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	bool m_bFollowNamedValue; // 0x58	
	bool m_bSupportsDisabled; // 0x59	
	bool m_bUseOrientation; // 0x5a	
private:
	[[maybe_unused]] uint8_t __pad005b[0x1]; // 0x5b
public:
	int32_t m_nControlPoint; // 0x5c	
	int32_t m_nControlPointRangeMax; // 0x60	
	float m_flEndCPGrowthTime; // 0x64	
};

