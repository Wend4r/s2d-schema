#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xc0
// 
// MGetKV3ClassDefaults
struct SkeletonAnimCapture_t
{
public:
	CEntityIndex m_nEntIndex; // 0x0	
	CEntityIndex m_nEntParent; // 0x4	
	CUtlVector< CEntityIndex > m_ImportedCollision; // 0x8	
	CUtlString m_ModelName; // 0x20	
	CUtlString m_CaptureName; // 0x28	
	CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose; // 0x30	
	CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose; // 0x48	
	int32_t m_nFlexControllers; // 0x60	
	bool m_bPredicted; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0065[0x43]; // 0x65
public:
	CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames; // 0xa8	
};

