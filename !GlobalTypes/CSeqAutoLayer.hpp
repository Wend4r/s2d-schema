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
	CSeqAutoLayerFlag m_flags; // 0x4	
	float m_start; // 0xc	
	float m_peak; // 0x10	
	float m_tail; // 0x14	
	float m_end; // 0x18	
};

