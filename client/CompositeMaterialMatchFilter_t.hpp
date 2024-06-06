#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialMatchFilter_t
{
public:
	// MPropertyFriendlyName "Match Type"
	CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_strMatchFilter; // 0x8	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMatchValue; // 0x10	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x18	
};

