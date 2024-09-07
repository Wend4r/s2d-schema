#pragma once

#include <cstdint>

struct CSeqMultiFetchFlag;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// 
// MGetKV3ClassDefaults
class CSeqMultiFetch
{
public:
	CSeqMultiFetchFlag m_flags; // 0x0	
	CUtlVector< int16 > m_localReferenceArray; // 0x8	
	int32_t m_nGroupSize[2]; // 0x20	
	int32_t m_nLocalPose[2]; // 0x28	
	CUtlVector< float32 > m_poseKeyArray0; // 0x30	
	CUtlVector< float32 > m_poseKeyArray1; // 0x48	
	int32_t m_nLocalCyclePoseParameter; // 0x60	
	bool m_bCalculatePoseParameters; // 0x64	
	bool m_bFixedBlendWeight; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	float m_flFixedBlendWeightVals[2]; // 0x68	
};

