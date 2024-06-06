#pragma once

#include <cstdint>

struct CBlendCurve;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Matching"
class CAnimGraphDoc_MotionMatchingNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItemGroup > > m_groups; // 0x48	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionMetric > > m_metrics; // 0x60	
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0x78	
	// MPropertyHideField
	int32_t m_nRandomSeed; // 0x80	
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttributeRange "0.01 0.2"
	float m_flSampleRate; // 0x84	
	// MPropertyFriendlyName "Search Every Update"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrChangeCallback
	bool m_bSearchEveryTick; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad0089[0x3]; // 0x89
public:
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x8c	
	// MPropertyFriendlyName "Search when motion ends"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenMotionEnds; // 0x90	
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenGoalChanges; // 0x91	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
public:
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x94	
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x98	
	// MPropertyFriendlyName "Re-Selection Time Window"
	float m_flReselectionTimeWindow; // 0x9c	
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockSelectionWhenWaning; // 0xa0	
	// MPropertyFriendlyName "Enable Rotation Correction"
	bool m_bEnableRotationCorrection; // 0xa1	
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa2	
private:
	[[maybe_unused]] uint8_t __pad00a3[0x1]; // 0xa3
public:
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xa4	
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xa8	
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb0	
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xb4	
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xb8	
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xbc	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc0	
};

