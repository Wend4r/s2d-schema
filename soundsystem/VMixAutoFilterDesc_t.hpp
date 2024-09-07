#pragma once

#include <cstdint>

struct VMixFilterDesc_t;
// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixAutoFilterDesc_t
{
public:
	float m_flEnvelopeAmount; // 0x0	
	float m_flAttackTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
	VMixFilterDesc_t m_filter; // 0xc	
	float m_flLFOAmount; // 0x1c	
	float m_flLFORate; // 0x20	
	float m_flPhase; // 0x24	
	VMixLFOShape_t m_nLFOShape; // 0x28	
};

