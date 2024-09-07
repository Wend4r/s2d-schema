#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0	
	float tv; // 0x4	
	float flDist; // 0x8	
	float flWeight[4]; // 0xc	
	uint16_t nNode[6]; // 0x1c	
};

