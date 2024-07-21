#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EViscousBowlingBallState_t : uint32_t
{
	EViscousBowlingBallState_None = 0x0,
	EViscousBowlingBallState_TransformToBall = 0x1,
	EViscousBowlingBallState_Rolling = 0x2,
	EViscousBowlingBallState_TransformFromBall = 0x3,
};

