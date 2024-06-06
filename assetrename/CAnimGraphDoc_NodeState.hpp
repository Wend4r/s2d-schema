#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeState : public CAnimGraphDoc_State
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x78	
	// MPropertyFriendlyName "Exclusive Root Motion"
	// MPropertySortPriority "0"
	bool m_bIsRootMotionExclusive; // 0x80	
	// MPropertyFriendlyName "Exclusive Root Motion On First Frame"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "m_bIsRootMotionExclusive == false"
	bool m_bIsRootMotionExclusiveFirstFrame; // 0x81	
};

