#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "WayPoint Helper"
class CAnimGraphDoc_WayPointHelperNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x48	
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x4c	
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x50	
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x51	
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x52	
};

