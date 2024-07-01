#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class ELashGrappleState : uint8_t
{
	ELashGrappleState_None = 0x0,
	ELashGrappleState_LiftingUp = 0x1,
	ELashGrappleState_HangingInAir = 0x2,
};

