#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeQuad_t
{
public:
	uint16_t nNode[4]; // 0x0	
	float flSlack; // 0x8	
	Vector4D vShape[4]; // 0xc	
};

