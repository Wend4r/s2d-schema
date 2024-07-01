#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0xc]; // 0x1bc
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1c8	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1cc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1d4	
};

