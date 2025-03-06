#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CFootTrajectory
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vOffset; // 0x8	
	float m_flRotationOffset; // 0x14	
	float m_flProgression; // 0x18	
};

