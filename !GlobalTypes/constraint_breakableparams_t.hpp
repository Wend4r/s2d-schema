#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0	
	float forceLimit; // 0x4	
	float torqueLimit; // 0x8	
	float bodyMassScale[2]; // 0xc	
	bool isActive; // 0x14	
};

