#pragma once

#include <cstdint>

struct EngineLoopState_t;
// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRenderTime; // 0x28	
	float m_flRealTime; // 0x2c	
	float m_flRenderFrameTimeUnbounded; // 0x30	
	bool m_bRenderOnly; // 0x34	
};

