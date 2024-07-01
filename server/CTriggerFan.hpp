#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x918	
	Vector m_vFanEnd; // 0x924	
	Vector m_vNoise; // 0x930	
	float m_flForce; // 0x93c	
	float m_flRopeForceScale; // 0x940	
	float m_flPlayerForce; // 0x944	
	float m_flRampTime; // 0x948	
	bool m_bFalloff; // 0x94c	
	bool m_bPushPlayer; // 0x94d	
	bool m_bRampDown; // 0x94e	
	bool m_bAddNoise; // 0x94f	
	CountdownTimer m_RampTimer; // 0x950	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

