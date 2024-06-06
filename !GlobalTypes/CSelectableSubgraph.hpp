#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CSelectableSubgraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "File"
	// MPropertyAttributeEditor "AssetBrowse( vmix )"
	CUtlString file; // 0x8	
	// MPropertyFriendlyName "Name"
	// MPropertyAttributeChoiceName "graph_names"
	CUtlString subgraphName; // 0x10	
};

