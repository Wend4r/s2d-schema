#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf80
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xee8	
	float m_flDistance; // 0xef4	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xef8	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xefc	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf00	
	float m_flAjarAngle; // 0xf04	
	QAngle m_angRotationAjarDeprecated; // 0xf08	
	QAngle m_angRotationClosed; // 0xf14	
	QAngle m_angRotationOpenForward; // 0xf20	
	QAngle m_angRotationOpenBack; // 0xf2c	
	QAngle m_angGoal; // 0xf38	
	Vector m_vecForwardBoundsMin; // 0xf44	
	Vector m_vecForwardBoundsMax; // 0xf50	
	Vector m_vecBackBoundsMin; // 0xf5c	
	Vector m_vecBackBoundsMax; // 0xf68	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xf74	
private:
	[[maybe_unused]] uint8_t __pad0f75[0x3]; // 0xf75
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xf78	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

