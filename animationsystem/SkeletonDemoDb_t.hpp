#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct SkeletonDemoDb_t
{
public:
	CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures; // 0x0	
	CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack; // 0x18	
	float m_flRecordingTime; // 0x30	
};

