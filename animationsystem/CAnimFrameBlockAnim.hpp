#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0	
	int32_t m_nEndFrame; // 0x4	
	CUtlVector< int32 > m_segmentIndexArray; // 0x8	
};

