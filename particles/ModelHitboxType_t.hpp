#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ModelHitboxType_t : uint32_t
{
	MODEL_HITBOX_TYPE_STANDARD = 0x0,
	MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
	MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
	MODEL_HITBOX_TYPE_SNAPSHOT = 0x3,
};

