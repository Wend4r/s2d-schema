#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
	CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18	
	CUtlLeanVector< AABB_t > m_drawBounds; // 0x28	
	CUtlLeanVector< CMeshletDescriptor > m_meshlets; // 0x38	
	Vector4D m_vTintColor; // 0x48	
};

