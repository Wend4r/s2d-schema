#pragma once

#include <cstdint>

struct SkeletonBoneBounds_t;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0	
	CUtlString m_parentName; // 0x8	
	matrix3x4_t m_invBindPose; // 0x10	
	// -> m_vecCenter - 0x40
	// -> m_vecSize - 0x4c
	SkeletonBoneBounds_t m_bbox; // 0x40	
	float m_flSphereRadius; // 0x58	
};

