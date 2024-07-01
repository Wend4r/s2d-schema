#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf30
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xe98	
	float m_flDistance; // 0xea4	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xea8	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xeac	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xeb0	
	float m_flAjarAngle; // 0xeb4	
	QAngle m_angRotationAjarDeprecated; // 0xeb8	
	QAngle m_angRotationClosed; // 0xec4	
	QAngle m_angRotationOpenForward; // 0xed0	
	QAngle m_angRotationOpenBack; // 0xedc	
	QAngle m_angGoal; // 0xee8	
	Vector m_vecForwardBoundsMin; // 0xef4	
	Vector m_vecForwardBoundsMax; // 0xf00	
	Vector m_vecBackBoundsMin; // 0xf0c	
	Vector m_vecBackBoundsMax; // 0xf18	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xf24	
private:
	[[maybe_unused]] uint8_t __pad0f25[0x3]; // 0xf25
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xf28	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

