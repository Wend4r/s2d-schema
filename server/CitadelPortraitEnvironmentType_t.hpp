#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class CitadelPortraitEnvironmentType_t : uint32_t
{
	CITADEL_PORTRAIT_ENVIRONMENT_INVALID = 0xffffffffffffffff,
	CITADEL_PORTRAIT_ENVIRONMENT_DEFAULT = 0x0,
	CITADEL_PORTRAIT_ENVIRONMENT_FULL_BODY = 0x1,
	CITADEL_PORTRAIT_ENVIRONMENT_CARD = 0x2,
	CITADEL_PORTRAIT_ENVIRONMENT_WEBPAGE = 0x3,
	CITADEL_PORTRAIT_ENVIRONMENT_FULL_BODY_RIGHT_SIDE = 0x4,
	CITADEL_PORTRAIT_ENVIRONMENT_TYPE_COUNT = 0x5,
};

