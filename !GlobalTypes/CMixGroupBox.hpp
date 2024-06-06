#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Group Box"
// MPropertyDescription "Groups a set of nodes.  Comments/colors will get displayed in the graph and on node editors.  A group box allows the user to drag the entire group as one object."
class CMixGroupBox : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Background Color"
	Color m_color; // 0x20	
	// MPropertyFriendlyName "Move contained nodes"
	bool m_bMovesNodes; // 0x24	
};

