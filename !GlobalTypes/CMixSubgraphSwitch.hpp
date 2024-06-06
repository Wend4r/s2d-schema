#pragma once

#include <cstdint>

struct CSelectableSubgraph;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Subgraph Switch Audio Node"
// MPropertyDescription "Allows you to swap between sub-graphs with a short crossfade.  Can be used to swap out processing algorithms/configurations, or to dynamically enable/disable optional processing stages.  This can also expose control parameters from the subgraphs so those can be connected to the outer graph."
class CMixSubgraphSwitch : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Show Detailed Plug Names"
	bool bUseDetailedPlugNames; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Default Subgraph"
	CSelectableSubgraph defaultSubgraph; // 0x28	
	// MPropertyFriendlyName "Mode"
	// MPropertyGroupName "+Transition Behavior"
	VMixSubgraphSwitchInterpolationType_t interpolationMode; // 0x40	
	// MPropertyFriendlyName "Only Let Effect Ring On Fadeout"
	// MPropertyGroupName "Transition Behavior"
	bool bOnlyTailsOnFadeOut; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyFriendlyName "Transition time (seconds)"
	// MPropertyGroupName "Transition Behavior"
	float flTransitionTime; // 0x48	
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t nChannels; // 0x4c	
	CUtlVector< CSelectableSubgraph > subgraphs; // 0x50	
};

