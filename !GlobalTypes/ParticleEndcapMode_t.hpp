#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleEndcapMode_t : uint32_t
{
	// MPropertyFriendlyName "Always Enabled"
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	// MPropertyFriendlyName "Disabled During Endcap"
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	// MPropertyFriendlyName "Only Enabled During Endcap"
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

