#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class EViscousBowlingBallState_t : uint8_t
{
	EViscousBowlingBallState_None = 0x0,
	EViscousBowlingBallState_TransformToBall = 0x1,
	EViscousBowlingBallState_Rolling = 0x2,
	EViscousBowlingBallState_TransformFromBall = 0x3,
};

