#pragma once

#include <cstdint>

struct MotionIndex;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CMotionGraphConfig
{
public:
	float m_paramValues[4]; // 0x0	
	float m_flDuration; // 0x10	
	// -> m_nGroup - 0x14
	// -> m_nMotion - 0x16
	MotionIndex m_nMotionIndex; // 0x14	
	int32_t m_nSampleStart; // 0x18	
	int32_t m_nSampleCount; // 0x1c	
};

