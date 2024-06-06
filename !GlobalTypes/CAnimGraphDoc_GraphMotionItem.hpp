#pragma once

#include <cstdint>

struct CAnimGraphDoc_MotionNodeManager;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Graph"
class CAnimGraphDoc_GraphMotionItem : public CAnimGraphDoc_MotionItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0xa8	
	// MPropertyHideField
	CAnimGraphDoc_MotionNodeManager m_nodeManager; // 0xb0	
};

