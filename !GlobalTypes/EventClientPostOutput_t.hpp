#pragma once

#include <cstdint>

struct EngineLoopState_t;
// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	float m_flRenderFrameTime; // 0x30	
	float m_flRenderFrameTimeUnbounded; // 0x34	
	bool m_bRenderOnly; // 0x38	
};

