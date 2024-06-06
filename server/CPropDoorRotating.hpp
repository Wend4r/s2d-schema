#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xea8
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xe10	
	float m_flDistance; // 0xe1c	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xe20	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xe24	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xe28	
	float m_flAjarAngle; // 0xe2c	
	QAngle m_angRotationAjarDeprecated; // 0xe30	
	QAngle m_angRotationClosed; // 0xe3c	
	QAngle m_angRotationOpenForward; // 0xe48	
	QAngle m_angRotationOpenBack; // 0xe54	
	QAngle m_angGoal; // 0xe60	
	Vector m_vecForwardBoundsMin; // 0xe6c	
	Vector m_vecForwardBoundsMax; // 0xe78	
	Vector m_vecBackBoundsMin; // 0xe84	
	Vector m_vecBackBoundsMax; // 0xe90	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xe9c	
private:
	[[maybe_unused]] uint8_t __pad0e9d[0x3]; // 0xe9d
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xea0	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

