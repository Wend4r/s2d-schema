#pragma once

#include <cstdint>

struct AnimationDecodeDebugDumpElement_t;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x110
// 
// MGetKV3ClassDefaults
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0	
	matrix3x4a_t m_rootToWorld; // 0x10	
	bool m_bBonesInWorldSpace; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	CUtlVector< uint32 > m_boneSetupMask; // 0x48	
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60	
	CUtlVector< float32 > m_flexControllers; // 0x78	
	AnimationSnapshotType_t m_SnapshotType; // 0x90	
	bool m_bHasDecodeDump; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	// -> m_nEntityIndex - 0x98
	// -> m_modelName - 0xa0
	// -> m_poseParams - 0xa8
	// -> m_decodeOps - 0xc0
	// -> m_internalOps - 0xd8
	// -> m_decodedAnims - 0xf0
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98	
};

