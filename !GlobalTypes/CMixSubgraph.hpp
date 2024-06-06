#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Subgraph Node"
// MPropertyDescription "Contains a refernce to a subroutine that is authored as a separate graph.  Used to collapse common functions into single blocks."
class CMixSubgraph : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "File"
	// MPropertyAttributeEditor "AssetBrowse( vmix )"
	CUtlString subgraphFile; // 0x20	
	// MPropertyFriendlyName "Name"
	// MPropertyAttributeChoiceName "graph_names"
	CUtlString subgraphName; // 0x28	
};

