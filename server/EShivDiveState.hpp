#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EShivDiveState : uint32_t
{
	EShivDiveState_None = 0x0,
	EShivDiveState_PrePossessAnim = 0x1,
	EShivDiveState_Possessing = 0x2,
	EShivDiveState_PostPossessAnim = 0x3,
};

