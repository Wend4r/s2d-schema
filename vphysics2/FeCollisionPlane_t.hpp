#pragma once

#include <cstdint>

struct RnPlane_t;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	// -> m_vNormal - 0x4
	// -> m_flOffset - 0x10
	RnPlane_t m_Plane; // 0x4	
	float flStrength; // 0x14	
};

