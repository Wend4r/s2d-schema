#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class ResourceDataEncodingType_t : uint32_t
{
	RESOURCE_ENCODING_INVALID = 0xffffffffffffffff,
	RESOURCE_ENCODING_INTROSPECTED = 0x0,
	RESOURCE_ENCODING_KV3 = 0x1,
	RESOURCE_ENCODING_VTEX = 0x2,
	RESOURCE_ENCODING_RAW_BYTES = 0x3,
	RESOURCE_ENCODING_VSNAP = 0x4,
	RESOURCE_ENCODING_VRMAN = 0x5,
	RESOURCE_ENCODING_COMPILEIMAGEUTILS_TEXT = 0x6,
	RESOURCE_ENCODING_TEXT = 0x7,
	RESOURCE_ENCODING_MBUF = 0x8,
	RESOURCE_ENCODING_COUNT = 0x9,
};

