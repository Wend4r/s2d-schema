#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor
// MClassIsParticleModel
// MParticleCustomFieldDefaultValue
class CParticleModelInput : public CParticleInput
{
public:
	ParticleModelType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	int32_t m_nControlPoint; // 0x58	
};

