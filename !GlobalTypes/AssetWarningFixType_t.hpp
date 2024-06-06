#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AssetWarningFixType_t : uint32_t
{
	NONE = 0x0,
	VMDL_CONVERT_TO_MODELDOC = 0x1,
	VMAP_MANUAL_RECOMPILE = 0x2,
};

