#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf38
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xea0	
	float m_flDistance; // 0xeac	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xeb0	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xeb4	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xeb8	
	float m_flAjarAngle; // 0xebc	
	QAngle m_angRotationAjarDeprecated; // 0xec0	
	QAngle m_angRotationClosed; // 0xecc	
	QAngle m_angRotationOpenForward; // 0xed8	
	QAngle m_angRotationOpenBack; // 0xee4	
	QAngle m_angGoal; // 0xef0	
	Vector m_vecForwardBoundsMin; // 0xefc	
	Vector m_vecForwardBoundsMax; // 0xf08	
	Vector m_vecBackBoundsMin; // 0xf14	
	Vector m_vecBackBoundsMax; // 0xf20	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xf2c	
private:
	[[maybe_unused]] uint8_t __pad0f2d[0x3]; // 0xf2d
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xf30	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

