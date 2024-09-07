#pragma once

#include <cstdint>

struct CNmSyncTrack;
struct CNmRootMotionData;
// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 16
// Size: 0x1b0
// 
// MGetKV3ClassDefaults
class CNmClip
{
public:
	CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x0	
	uint32_t m_nNumFrames; // 0x8	
	float m_flDuration; // 0xc	
	CUtlBinaryBlock m_compressedPoseData; // 0x10	
	CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings; // 0x28	
	CUtlVector< uint32 > m_compressedPoseOffsets; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0058[0x48]; // 0x58
public:
	// -> m_syncEvents - 0xa0
	// -> m_nStartEventOffset - 0x148
	CNmSyncTrack m_syncTrack; // 0xa0	
	// -> m_transforms - 0x150
	// -> m_nNumFrames - 0x168
	// -> m_flAverageLinearVelocity - 0x16c
	// -> m_flAverageAngularVelocityRadians - 0x170
	// -> m_totalDelta - 0x180
	CNmRootMotionData m_rootMotion; // 0x150	
	bool m_bIsAdditive; // 0x1a0	
};

