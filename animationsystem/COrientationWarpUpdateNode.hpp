#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class COrientationWarpUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	OrientationWarpMode_t m_eMode; // 0x74	
	CAnimParamHandle m_hTargetParam; // 0x78	
	CAnimParamHandle m_hTargetPositionParam; // 0x7a	
	CAnimParamHandle m_hFallbackTargetPositionParam; // 0x7c	
private:
	[[maybe_unused]] uint8_t __pad007e[0x2]; // 0x7e
public:
	OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x80	
	float m_flTargetOffset; // 0x84	
	CAnimParamHandle m_hTargetOffsetParam; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008a[0x6]; // 0x8a
public:
	CAnimInputDamping m_damping; // 0x90	
	OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0xa8	
	float m_flMaxRootMotionScale; // 0xac	
	bool m_bEnablePreferredRotationDirection; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b1[0x3]; // 0xb1
public:
	AnimValueSource m_ePreferredRotationDirection; // 0xb4	
	float m_flPreferredRotationThreshold; // 0xb8	
};

