#pragma once

#include <cstdint>

struct FootLockPoseOpFixedSettings;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x158
// Has VTable
// 
// MGetKV3ClassDefaults
class CFootLockUpdateNode : public CUnaryUpdateNode
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad00d8[0x8]; // 0xd8
public:
	CUtlVector< FootFixedSettings > m_footSettings; // 0xe0	
	CAnimInputDamping m_hipShiftDamping; // 0xf8	
	CAnimInputDamping m_rootHeightDamping; // 0x110	
	float m_flStrideCurveScale; // 0x128	
	float m_flStrideCurveLimitScale; // 0x12c	
	float m_flStepHeightIncreaseScale; // 0x130	
	float m_flStepHeightDecreaseScale; // 0x134	
	float m_flHipShiftScale; // 0x138	
	float m_flBlendTime; // 0x13c	
	float m_flMaxRootHeightOffset; // 0x140	
	float m_flMinRootHeightOffset; // 0x144	
	float m_flTiltPlanePitchSpringStrength; // 0x148	
	float m_flTiltPlaneRollSpringStrength; // 0x14c	
	bool m_bApplyFootRotationLimits; // 0x150	
	bool m_bApplyHipShift; // 0x151	
	bool m_bModulateStepHeight; // 0x152	
	bool m_bResetChild; // 0x153	
	bool m_bEnableVerticalCurvedPaths; // 0x154	
	bool m_bEnableRootHeightDamping; // 0x155	
};

