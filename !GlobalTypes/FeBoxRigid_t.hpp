#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBoxRigid_t
{
public:
	CTransform tmFrame2; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	Vector vSize; // 0x24	
	uint16_t nVertexMapIndex; // 0x30	
	uint16_t nFlags; // 0x32	
};

