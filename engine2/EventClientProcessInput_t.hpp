#pragma once

#include <cstdint>

struct EngineLoopState_t;
// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flTickInterval; // 0x2c	
	double m_flTickStartTime; // 0x30	
};

