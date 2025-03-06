#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0	
	CUtlVector< ragdollhierarchyjoint_t > hierarchyJoints; // 0x18	
	CUtlVector< int32 > boneIndex; // 0x30	
	bool allowStretch; // 0x48	
	bool unused; // 0x49	
};

