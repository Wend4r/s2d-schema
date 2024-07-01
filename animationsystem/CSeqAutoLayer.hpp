#pragma once

#include <cstdint>

struct CSeqAutoLayerFlag;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSeqAutoLayer
{
public:
	int16_t m_nLocalReference; // 0x0	
	int16_t m_nLocalPose; // 0x2	
	// -> m_bPost - 0x4
	// -> m_bSpline - 0x5
	// -> m_bXFade - 0x6
	// -> m_bNoBlend - 0x7
	// -> m_bLocal - 0x8
	// -> m_bPose - 0x9
	// -> m_bFetchFrame - 0xa
	// -> m_bSubtract - 0xb
	CSeqAutoLayerFlag m_flags; // 0x4	
	float m_start; // 0xc	
	float m_peak; // 0x10	
	float m_tail; // 0x14	
	float m_end; // 0x18	
};

