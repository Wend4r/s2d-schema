#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	float m_flFluidDensity; // 0x18	
	
	// Datamap fields:
	// void m_pController; // 0x8
};

