#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CFuncTimescale : public CBaseEntity
{
public:
	float m_flDesiredTimescale; // 0x4b8	
	float m_flAcceleration; // 0x4bc	
	float m_flMinBlendRate; // 0x4c0	
	float m_flBlendDeltaMultiplier; // 0x4c4	
	bool m_isStarted; // 0x4c8	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputReset; // 0x0
};

