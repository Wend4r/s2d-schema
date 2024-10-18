#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x960	
	Vector m_vFanEnd; // 0x96c	
	Vector m_vNoise; // 0x978	
	float m_flForce; // 0x984	
	float m_flRopeForceScale; // 0x988	
	float m_flPlayerForce; // 0x98c	
	float m_flRampTime; // 0x990	
	bool m_bFalloff; // 0x994	
	bool m_bPushPlayer; // 0x995	
	bool m_bRampDown; // 0x996	
	bool m_bAddNoise; // 0x997	
	CountdownTimer m_RampTimer; // 0x998	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

