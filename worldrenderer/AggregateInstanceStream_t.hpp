#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class AggregateInstanceStream_t : uint8_t
{
	AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
	AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
	AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
	AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4,
};

