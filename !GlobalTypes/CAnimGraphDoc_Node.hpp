#pragma once

#include <cstdint>

struct AnimNodeID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20	
	// MPropertyGroupName "Debug"
	Vector2D m_vecPosition; // 0x28	
	// MPropertyGroupName "Debug"
	AnimNodeID m_nNodeID; // 0x30	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug This Node"
	bool m_bDebugThisNode; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x38	
};

