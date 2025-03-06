#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Damping"
class CAnimInputDamping
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8	
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc	
	// MPropertyFriendlyName "Falling Speed Scale"
	float m_fFallingSpeedScale; // 0x10	
};

