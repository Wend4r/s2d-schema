#pragma once

#include <cstdint>

struct AABB_t;
// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ClutterTile_t
{
public:
	uint32_t m_nFirstInstance; // 0x0	
	uint32_t m_nLastInstance; // 0x4	
	AABB_t m_BoundsWs; // 0x8	
};

