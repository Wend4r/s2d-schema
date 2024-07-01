#pragma once

#include <cstdint>

struct CMotionDataSet;
struct CBlendCurve;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MGetKV3ClassDefaults
class CMotionMatchingUpdateNode : public CLeafUpdateNode
{
public:
	CMotionDataSet m_dataSet; // 0x58	
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78	
	CUtlVector< float32 > m_weights; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x38]; // 0xa8
public:
	bool m_bSearchEveryTick; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e1[0x3]; // 0xe1
public:
	float m_flSearchInterval; // 0xe4	
	bool m_bSearchWhenClipEnds; // 0xe8	
	bool m_bSearchWhenGoalChanges; // 0xe9	
private:
	[[maybe_unused]] uint8_t __pad00ea[0x2]; // 0xea
public:
	CBlendCurve m_blendCurve; // 0xec	
	float m_flSampleRate; // 0xf4	
	float m_flBlendTime; // 0xf8	
	bool m_bLockClipWhenWaning; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad00fd[0x3]; // 0xfd
public:
	float m_flSelectionThreshold; // 0x100	
	float m_flReselectionTimeWindow; // 0x104	
	bool m_bEnableRotationCorrection; // 0x108	
	bool m_bGoalAssist; // 0x109	
private:
	[[maybe_unused]] uint8_t __pad010a[0x2]; // 0x10a
public:
	float m_flGoalAssistDistance; // 0x10c	
	float m_flGoalAssistTolerance; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CAnimInputDamping m_distanceScale_Damping; // 0x118	
	float m_flDistanceScale_OuterRadius; // 0x128	
	float m_flDistanceScale_InnerRadius; // 0x12c	
	float m_flDistanceScale_MaxScale; // 0x130	
	float m_flDistanceScale_MinScale; // 0x134	
	bool m_bEnableDistanceScaling; // 0x138	
};

