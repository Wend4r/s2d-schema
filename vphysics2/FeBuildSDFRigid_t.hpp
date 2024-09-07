#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct FeBuildSDFRigid_t : public FeSDFRigid_t
{
public:
	int32_t m_nPriority; // 0x48	
	uint32_t m_nVertexMapHash; // 0x4c	
};

