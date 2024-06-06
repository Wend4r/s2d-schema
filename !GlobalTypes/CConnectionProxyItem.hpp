#pragma once

#include <cstdint>

struct AnimNodeOutputID;
struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Input Item"
// MPropertyElementNameFn
class CConnectionProxyItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0	
	// MPropertyHideField
	AnimNodeOutputID m_outputID; // 0x8	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0xc	
};

