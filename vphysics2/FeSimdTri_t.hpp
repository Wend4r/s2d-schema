#pragma once

#include <cstdint>

struct FourVectors2D;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x80
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdTri_t
{
public:
	uint32_t nNode[3][4]; // 0x0	
	fltx4 w1; // 0x30	
	fltx4 w2; // 0x40	
	fltx4 v1x; // 0x50	
	// -> x - 0x60
	// -> y - 0x70
	FourVectors2D v2; // 0x60	
};

