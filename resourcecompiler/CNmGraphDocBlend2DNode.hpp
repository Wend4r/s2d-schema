#pragma once

#include <cstdint>

struct CNmBlendSpace2D;
// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBlend2DNode : public CNmGraphDocFlowNode
{
public:
	// MPropertyAttributeEditor "BlendSpace2D()"
	// -> m_pointNames - 0xf8
	// -> m_points - 0x110
	// -> m_indices - 0x128
	// -> m_hullIndices - 0x140
	CNmBlendSpace2D m_blendSpace; // 0xf8	
	bool m_bAllowLooping; // 0x158	
};

