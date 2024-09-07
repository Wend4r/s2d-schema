#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleSequenceCropOverride_t : uint32_t
{
	// MPropertyFriendlyName "Use Default Cropping Behavior"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffffffffffff,
	// MPropertyFriendlyName "Force Cropping Off"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
	// MPropertyFriendlyName "Force Cropping On"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
};

