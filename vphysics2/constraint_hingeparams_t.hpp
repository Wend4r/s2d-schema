#pragma once

#include <cstdint>

struct constraint_axislimit_t;
struct constraint_breakableparams_t;
// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x40
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0	
	Vector worldAxisDirection; // 0xc	
	// -> flMinRotation - 0x18
	// -> flMaxRotation - 0x1c
	// -> flMotorTargetAngSpeed - 0x20
	// -> flMotorMaxTorque - 0x24
	constraint_axislimit_t hingeAxis; // 0x18	
	constraint_breakableparams_t constraint; // 0x28	
};

