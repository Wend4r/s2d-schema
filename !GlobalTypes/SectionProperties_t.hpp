#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MPropertyAutoExpandSelf
struct SectionProperties_t
{
public:
	// MPropertyDescription "Do we want to show title text above this block of ability properties (per stack, to enemies, to allies, etc.)? If empty, we show none"
	CUtlString m_strPropertiesTitleLocString; // 0x0	
	// MPropertyDescription "Which ability properties do we want to show in this section?"
	CUtlVector< AbilityPropertyInfo_t > m_vecAbilityProperties; // 0x8	
};

