#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CBubbling : public CBaseModelEntity
{
public:
	int32_t m_density; // 0x790	
	int32_t m_frequency; // 0x794	
	int32_t m_state; // 0x798	
	
	// Datamap fields:
	// float m_flSpeed; // 0x344
	// void CBubblingFizzThink; // 0x0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCurrent; // 0x0
	// int32_t InputSetDensity; // 0x0
	// int32_t InputSetFrequency; // 0x0
};

