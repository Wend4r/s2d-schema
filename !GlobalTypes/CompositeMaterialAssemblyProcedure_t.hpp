#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialAssemblyProcedure_t
{
public:
	// MPropertyFriendlyName "Includes"
	// MPropertyAttributeEditor "AssetBrowse( vcompmat )"
	CUtlVector< CResourceName > m_vecCompMatIncludes; // 0x0	
	// MPropertyFriendlyName "Match Filters"
	CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // 0x18	
	// MPropertyFriendlyName "Composite Inputs"
	CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // 0x30	
	// MPropertyFriendlyName "Property Mutators"
	CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // 0x48	
};

