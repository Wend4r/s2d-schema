#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2c
// Has Trivial Destructor
class CVectorExponentialMovingAverage
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x2c]; // 0x0
public:
	// Datamap fields:
	// int32_t m_nSampleCount; // 0x4
	// int32_t m_nMaxSampleCount; // 0x0
	// Vector m_previousSample; // 0x8
	// Vector m_average; // 0x14
	// Vector m_averageDelta; // 0x20
	// No schema binary for binding
};

