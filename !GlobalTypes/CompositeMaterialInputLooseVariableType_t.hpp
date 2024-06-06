#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialInputLooseVariableType_t : uint32_t
{
	// MPropertyFriendlyName "Boolean"
	LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
	// MPropertyFriendlyName "Integer"
	LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
	// MPropertyFriendlyName "Integer2"
	LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
	// MPropertyFriendlyName "Integer3"
	LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
	// MPropertyFriendlyName "Integer4"
	LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
	// MPropertyFriendlyName "Float"
	LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
	// MPropertyFriendlyName "Float2"
	LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
	// MPropertyFriendlyName "Float3"
	LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
	// MPropertyFriendlyName "Float4"
	LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
	// MPropertyFriendlyName "Color4"
	LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
	// MPropertyFriendlyName "String"
	LOOSE_VARIABLE_TYPE_STRING = 0xa,
	// MPropertyFriendlyName "System Variable"
	LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
	// MPropertyFriendlyName "Material"
	LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
	// MPropertyFriendlyName "Texture"
	LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
	// MPropertyFriendlyName "Panorama Render"
	LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xe,
};

