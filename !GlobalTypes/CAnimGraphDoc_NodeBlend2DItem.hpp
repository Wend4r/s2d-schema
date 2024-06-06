#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Node Blend Item"
class CAnimGraphDoc_NodeBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x30	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
};

