#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// 
// MGetKV3ClassDefaults
// MVDataRoot
class CNavLinkMovementVData
{
public:
	// MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0x0	
	// MPropertyFriendlyName "Is Interpolated"
	// MPropertyDescription "Indicates that the animation has a segment that's interpolated. In general using this on navlinks that traverse +/- 50% of the recommended distance should look okay."
	bool m_bIsInterpolated; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e1[0x3]; // 0xe1
public:
	// MPropertyFriendlyName "Recommended Distance"
	// MPropertyDescription "Recommended distance this movement traverses"
	uint32_t m_unRecommendedDistance; // 0xe4	
	// MPropertyFriendlyName "Animgraph Variables"
	// MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
	// MPropertyAutoExpandSelf
	CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0xe8	
};

