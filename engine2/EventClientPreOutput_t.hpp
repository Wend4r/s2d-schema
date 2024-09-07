#pragma once

#include <cstdint>

struct EngineLoopState_t;
// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x48
// Has Trivial Destructor
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	double m_flRenderFrameTime; // 0x30	
	double m_flRenderFrameTimeUnbounded; // 0x38	
	float m_flRealTime; // 0x40	
	bool m_bRenderOnly; // 0x44	
};

