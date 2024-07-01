#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1b8	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1bc	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x1c0	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x1c4	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x1cc	
};

