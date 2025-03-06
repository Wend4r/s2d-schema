#pragma once

#include <cstdint>

struct AI_MovementHeadingSettings_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class AI_AdditionalMovementSettings
{
public:
	// -> m_eMode - 0x0
	// -> m_bUseBadZones - 0x4
	// -> m_badZones - 0x8
	// -> m_flPredictionLookAhead - 0x20
	AI_MovementHeadingSettings_t m_heading; // 0x0	
	float m_flProceduralIdleTurnSpeed; // 0x28	
	float m_flAcceleration; // 0x2c	
	float m_flDeceleration; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	CPiecewiseCurve m_decelerationCurve; // 0x38	
	float m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // 0x78	
	// MPropertyDescription "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
	float m_flMovementPlantedTurnAngleThreshold; // 0x7c	
	float m_flMaxIdleTurnScaleUp; // 0x80	
};

