#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x70
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x40	
	VectorAligned m_vWsPositionEnd; // 0x50	
	Color m_Color; // 0x60	
};

