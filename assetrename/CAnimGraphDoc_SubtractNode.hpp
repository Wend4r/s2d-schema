#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Subtract"
class CAnimGraphDoc_SubtractNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_baseInputConnection; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_subtractInputConnection; // 0x48	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x50	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x54	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x58	
	// MPropertyFriendlyName "Subtract Foot Motion"
	bool m_bApplyToFootMotion; // 0x5c	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x5d	
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x5e	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x5f	
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x60	
};

