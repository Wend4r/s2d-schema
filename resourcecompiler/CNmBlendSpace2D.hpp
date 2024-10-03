#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CNmBlendSpace2D
{
public:
	// MPropertyResizable
	CUtlVector< CUtlString > m_pointNames; // 0x0	
	// MPropertyResizable
	CUtlVector< Vector2D > m_points; // 0x18	
	// MPropertySuppressField
	CUtlVector< uint8 > m_indices; // 0x30	
	// MPropertySuppressField
	CUtlVector< uint8 > m_hullIndices; // 0x48	
};

