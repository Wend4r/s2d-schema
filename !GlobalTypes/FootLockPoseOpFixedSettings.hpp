#pragma once

#include <cstdint>

struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class FootLockPoseOpFixedSettings
{
public:
	CUtlVector< FootFixedData_t > m_footInfo; // 0x0	
	CAnimInputDamping m_hipDampingSettings; // 0x18	
	int32_t m_nHipBoneIndex; // 0x30	
	IKSolverType m_ikSolverType; // 0x34	
	bool m_bApplyTilt; // 0x38	
	bool m_bApplyHipDrop; // 0x39	
	bool m_bAlwaysUseFallbackHinge; // 0x3a	
	bool m_bApplyFootRotationLimits; // 0x3b	
	bool m_bApplyLegTwistLimits; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	float m_flMaxFootHeight; // 0x40	
	float m_flExtensionScale; // 0x44	
	float m_flMaxLegTwist; // 0x48	
	bool m_bEnableLockBreaking; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flLockBreakTolerance; // 0x50	
	float m_flLockBlendTime; // 0x54	
	bool m_bEnableStretching; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flMaxStretchAmount; // 0x5c	
	float m_flStretchExtensionScale; // 0x60	
};

