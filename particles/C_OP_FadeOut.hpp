#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x1b8	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x1bc	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x1c0	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c8[0x38]; // 0x1c8
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x200	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x201	
};

