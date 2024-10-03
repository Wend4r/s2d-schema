#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x1c0	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x1c4	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x1c8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1cc	
};

