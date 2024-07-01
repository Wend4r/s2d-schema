#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class EBotTestNodeType : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	EBotTestNode_NotSet = 0x0,
	EBotTestNode_StandingMantleStart = 0x1,
	EBotTestNode_MovingMantleStart = 0x2,
	EBotTestNode_Dest = 0x4,
	EBotTestNode_ShootTarget = 0x8,
	EBotTestNode_TargetDummy = 0x10,
	EBotTestNode_GunDPSTest = 0x20,
};

