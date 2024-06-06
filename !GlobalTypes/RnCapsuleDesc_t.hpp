#pragma once

#include <cstdint>

struct RnCapsule_t;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vCenter[2] - 0x10
	// -> m_flRadius - 0x28
	RnCapsule_t m_Capsule; // 0x10	
};

