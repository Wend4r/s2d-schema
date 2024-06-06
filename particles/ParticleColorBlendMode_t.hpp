#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleColorBlendMode_t : uint32_t
{
	// MPropertyFriendlyName "Replace"
	PARTICLEBLEND_DEFAULT = 0x0,
	// MPropertyFriendlyName "Overlay"
	PARTICLEBLEND_OVERLAY = 0x1,
	// MPropertyFriendlyName "Darken"
	PARTICLEBLEND_DARKEN = 0x2,
	// MPropertyFriendlyName "Lighten"
	PARTICLEBLEND_LIGHTEN = 0x3,
	// MPropertyFriendlyName "Multiply"
	PARTICLEBLEND_MULTIPLY = 0x4,
};

