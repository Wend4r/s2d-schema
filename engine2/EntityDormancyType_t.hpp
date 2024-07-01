#pragma once

#include <cstdint>

// Registered binary: engine2.dll (project 'entity2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

