#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0	
	int32_t m_nForceBone; // 0xc	
	bool m_bForceCurrentWorldTransform; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	int32_t m_nHealthToGrant; // 0x14	
};

