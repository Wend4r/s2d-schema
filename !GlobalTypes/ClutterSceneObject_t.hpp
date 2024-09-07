#pragma once

#include <cstdint>

struct AABB_t;
// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
struct ClutterSceneObject_t
{
public:
	AABB_t m_Bounds; // 0x0	
	ObjectTypeFlags_t m_flags; // 0x18	
	int16_t m_nLayer; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	CUtlVector< Vector > m_instancePositions; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	CUtlVector< float32 > m_instanceScales; // 0x50	
	CUtlVector< Color > m_instanceTintSrgb; // 0x68	
	CUtlVector< ClutterTile_t > m_tiles; // 0x80	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x98	
};

