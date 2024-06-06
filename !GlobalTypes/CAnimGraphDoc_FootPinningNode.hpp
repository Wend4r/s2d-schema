#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Pinning"
class CAnimGraphDoc_FootPinningNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootPinningItem > m_items; // 0x48	
	// MPropertyFriendlyName "Lock Timing Source"
	FootPinningTimingSource m_eTimingSource; // 0x60	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x64	
	// MPropertyFriendlyName "Lock Break Distance"
	float m_flLockBreakDistance; // 0x68	
	// MPropertyFriendlyName "Max Leg Straight Amount"
	// MPropertyAttributeRange "0 1"
	float m_flMaxLegStraightAmount; // 0x6c	
	// MPropertyFriendlyName "Limit Foot Rotation"
	// MPropertyGroupName "Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x7]; // 0x71
public:
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyGroupName "Foot Rotation Limits"
	CUtlString m_hipBoneName; // 0x78	
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "Knee Twist Limits"
	bool m_bApplyLegTwistLimits; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "Knee Twist Limits"
	float m_flMaxLegTwist; // 0x84	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x88	
};

