#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1060
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xfc8	
	float m_flDistance; // 0xfd4	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xfd8	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xfdc	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xfe0	
	float m_flAjarAngle; // 0xfe4	
	QAngle m_angRotationAjarDeprecated; // 0xfe8	
	QAngle m_angRotationClosed; // 0xff4	
	QAngle m_angRotationOpenForward; // 0x1000	
	QAngle m_angRotationOpenBack; // 0x100c	
	QAngle m_angGoal; // 0x1018	
	Vector m_vecForwardBoundsMin; // 0x1024	
	Vector m_vecForwardBoundsMax; // 0x1030	
	Vector m_vecBackBoundsMin; // 0x103c	
	Vector m_vecBackBoundsMax; // 0x1048	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0x1054	
private:
	[[maybe_unused]] uint8_t __pad1055[0x3]; // 0x1055
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0x1058	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

