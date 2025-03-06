#pragma once

#include <cstdint>

struct CVectorExponentialMovingAverage;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CMovementStatsProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int32_t m_nUseCounter; // 0x10	
	CVectorExponentialMovingAverage m_emaMovementDirection; // 0x14	
};

