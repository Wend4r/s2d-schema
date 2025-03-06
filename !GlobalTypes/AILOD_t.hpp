#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class AILOD_t : uint32_t
{
	// MPropertySuppressEnumerator
	eAuto = 0xffffffffffffffff,
	// MPropertyDescription "High - All features turned on for highest fidelity"
	eHigh = 0x0,
	// MPropertyDescription "Medium - Some features turned off"
	eMedium = 0x1,
	// MPropertyDescription "Low - Lots of features turned off"
	eLow = 0x2,
	// MPropertyDescription "Very Low - No decision making, thinks at very low rate"
	eVeryLow = 0x3,
	// MPropertySuppressEnumerator
	eNumLODs = 0x4,
};

