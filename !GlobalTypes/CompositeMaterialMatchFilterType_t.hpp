#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialMatchFilterType_t : uint32_t
{
	// MPropertyFriendlyName "Target Material Attribute Exists"
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
	// MPropertyFriendlyName "Target Material Shader Name"
	MATCH_FILTER_MATERIAL_SHADER = 0x1,
	// MPropertyFriendlyName "Target Material Name SubStr"
	MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
	// MPropertyFriendlyName "Target Material Attribute Equals"
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
	// MPropertyFriendlyName "Target Material Property Exists"
	MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
	// MPropertyFriendlyName "Target Material Property Equals"
	MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
};

