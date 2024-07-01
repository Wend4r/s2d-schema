#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
	int32_t m_nQuality; // 0x8	
	int32_t m_nProcType; // 0xc	
};

