#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CMixPropertyBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyDescription "Node name"
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "1"
	CUtlString m_name; // 0x8	
	// MPropertyDescription "Description of how this is used  the graph for people reading the graph"
	// MPropertySortPriority "-2"
	CUtlString m_Comment; // 0x10	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bActive; // 0x18	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bSolo; // 0x19	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bEditProperties; // 0x1a	
};

