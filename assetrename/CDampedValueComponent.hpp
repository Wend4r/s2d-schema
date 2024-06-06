#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CDampedValueComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	// MPropertyFriendlyName "Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CDampedValueItem > m_items; // 0x40	
};

