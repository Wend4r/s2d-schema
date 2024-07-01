#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class AI_NavGoalFlags_t : uint32_t
{
	eYawToDest = 0x1,
	eDisableUpdateGoalPos = 0x2,
	eLocalSucceedOnWithinTolerance = 0x4,
	eGoalOffsetInLocalYaw = 0x8,
	eDestInWorldSpace = 0x10,
	eDontLimitGoalOffset = 0x20,
	eInterruptPath = 0x200,
	eDisablePathSmoothing = 0x400,
	eClearGoalOffsetOnRepathForMovement = 0x800,
	eUseTargetPredictedPosition = 0x1000,
	eDisableTargetPredictedPositionForDynamicPathing = 0x2000,
	// MEnumeratorIsNotAFlag
	eDefault = 0x0,
};

