#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x1c
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPlateverbDesc_t
{
public:
	float m_flPrefilter; // 0x0	
	float m_flInputDiffusion1; // 0x4	
	float m_flInputDiffusion2; // 0x8	
	float m_flDecay; // 0xc	
	float m_flDamp; // 0x10	
	float m_flFeedbackDiffusion1; // 0x14	
	float m_flFeedbackDiffusion2; // 0x18	
};

