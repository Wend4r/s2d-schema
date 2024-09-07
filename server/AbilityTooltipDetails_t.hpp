#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
// MPropertyAutoExpandSelf
struct AbilityTooltipDetails_t
{
public:
	// MPropertyDescription "Add a new Section to the ability tooltip"
	CUtlVector< AbilitySectionInfo_t > m_vecAbilityInfoSections; // 0x0	
	// MPropertyDescription "Add additional header properties that aren't part of the default header properties"
	CUtlVector< CUtlString > m_vecAdditionalHeaderProperties; // 0x18	
};

