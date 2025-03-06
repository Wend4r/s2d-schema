#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CFloatExponentialMovingAverage
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// Datamap fields:
	// int32_t m_nSampleCount; // 0x4
	// int32_t m_nMaxSampleCount; // 0x0
	// float m_previousSample; // 0x8
	// float m_average; // 0xc
	// float m_averageDelta; // 0x10
	// No schema binary for binding
};

