#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CBtNodeConditionInactive : public CBtNodeCondition
{
private:
	[[maybe_unused]] uint8_t __pad0060[0x18]; // 0x60
public:
	float m_flRoundStartThresholdSeconds; // 0x78	
	float m_flSensorInactivityThresholdSeconds; // 0x7c	
	CountdownTimer m_SensorInactivityTimer; // 0x80	
};

