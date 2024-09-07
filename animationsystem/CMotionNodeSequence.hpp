#pragma once

#include <cstdint>

struct HSequence;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CMotionNodeSequence : public CMotionNode
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x28	
	HSequence m_hSequence; // 0x40	
	float m_flPlaybackSpeed; // 0x44	
};

