#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x8e0	
	Vector m_vFanEnd; // 0x8ec	
	Vector m_vNoise; // 0x8f8	
	float m_flForce; // 0x904	
	float m_flRopeForceScale; // 0x908	
	float m_flPlayerForce; // 0x90c	
	float m_flRampTime; // 0x910	
	bool m_bFalloff; // 0x914	
	bool m_bPushPlayer; // 0x915	
	bool m_bRampDown; // 0x916	
	bool m_bAddNoise; // 0x917	
	CountdownTimer m_RampTimer; // 0x918	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

