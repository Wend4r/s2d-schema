#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialInputTextureType_t : uint32_t
{
	// MPropertyFriendlyName "Default"
	INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
	// MPropertyFriendlyName "Normal Map"
	INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
	// MPropertyFriendlyName "Color"
	INPUT_TEXTURE_TYPE_COLOR = 0x2,
	// MPropertyFriendlyName "Masks"
	INPUT_TEXTURE_TYPE_MASKS = 0x3,
	// MPropertyFriendlyName "Roughness"
	INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
	// MPropertyFriendlyName "Pearlescence Mask"
	INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
	// MPropertyFriendlyName "Ambient Occlusion"
	INPUT_TEXTURE_TYPE_AO = 0x6,
};

