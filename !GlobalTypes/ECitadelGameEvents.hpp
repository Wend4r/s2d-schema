#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class ECitadelGameEvents : uint32_t
{
	GE_FireBullets = 0x1c2,
	GE_PlayerAnimEvent = 0x1c3,
	GE_ParticleSystemManager = 0x1ca,
	GE_ScreenTextPretty = 0x1cb,
	GE_ServerRequestedTracer = 0x1cc,
	GE_BulletImpact = 0x1cd,
	GE_EnableSatVolumesEvent = 0x1ce,
	GE_PlaceSatVolumeEvent = 0x1cf,
	GE_DisableSatVolumesEvent = 0x1d0,
	GE_RemoveSatVolumeEvent = 0x1d1,
};

