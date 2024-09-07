#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSpringIntegrator_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flSpringRestLength; // 0x4	
	float flSpringConstant; // 0x8	
	float flSpringDamping; // 0xc	
	float flNodeWeight0; // 0x10	
};

