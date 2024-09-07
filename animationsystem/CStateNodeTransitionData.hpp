#pragma once

#include <cstdint>

struct CBlendCurve;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CStateNodeTransitionData
{
public:
	CBlendCurve m_curve; // 0x0	
	CAnimValue< float32 > m_blendDuration; // 0x8	
	CAnimValue< float32 > m_resetCycleValue; // 0x10	
	struct 
	{
		uint8_t m_bReset: 1; 		
		uint8_t m_resetCycleOption: 3; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

