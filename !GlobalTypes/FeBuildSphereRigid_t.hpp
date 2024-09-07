#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20	
	uint32_t m_nVertexMapHash; // 0x24	
};

