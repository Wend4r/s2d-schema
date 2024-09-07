#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x40	
	uint32_t m_nVertexMapHash; // 0x44	
};

