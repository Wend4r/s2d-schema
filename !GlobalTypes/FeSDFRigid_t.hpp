#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct FeSDFRigid_t
{
public:
	Vector vLocalMin; // 0x0	
	Vector vLocalMax; // 0xc	
	float flBounciness; // 0x18	
	uint16_t nNode; // 0x1c	
	uint16_t nCollisionMask; // 0x1e	
	uint16_t nVertexMapIndex; // 0x20	
	uint16_t nFlags; // 0x22	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< float32 > m_Distances; // 0x28	
	int32_t m_nWidth; // 0x40	
	int32_t m_nHeight; // 0x44	
	int32_t m_nDepth; // 0x48	
};

