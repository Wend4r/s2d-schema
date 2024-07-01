#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x18]; // 0x1bc
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d8[0xc]; // 0x1d8
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1e4	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1e8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1ec	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1f0	
};

