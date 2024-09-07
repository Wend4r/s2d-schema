#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0	
	CUtlVector< int32 > m_boneParents; // 0x30	
	int32_t m_nBoneWeightCount; // 0x48	
};

