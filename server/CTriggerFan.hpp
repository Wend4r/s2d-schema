#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x920	
	Vector m_vFanEnd; // 0x92c	
	Vector m_vNoise; // 0x938	
	float m_flForce; // 0x944	
	float m_flRopeForceScale; // 0x948	
	float m_flPlayerForce; // 0x94c	
	float m_flRampTime; // 0x950	
	bool m_bFalloff; // 0x954	
	bool m_bPushPlayer; // 0x955	
	bool m_bRampDown; // 0x956	
	bool m_bAddNoise; // 0x957	
	CountdownTimer m_RampTimer; // 0x958	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

