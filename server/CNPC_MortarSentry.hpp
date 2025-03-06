#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18e8
// Has VTable
class CNPC_MortarSentry : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0xc]; // 0x1890
public:
	float m_flAttackCone; // 0x189c	
	float m_flLastAlertSound; // 0x18a0	
	float m_flTrackingSpeed; // 0x18a4	
	Vector m_vTargetPosition; // 0x18a8	
	float m_flSearchRadius; // 0x18b4	
	
	// Datamap fields:
	// float m_flLifeTime; // 0x18b8
	// void m_nCurrentVolley; // 0x18c8
	// void m_nGrenadesPerVolley; // 0x18cc
	// void m_flNextAttackTime; // 0x18d0
	// void m_flAttackRateInnerVolley; // 0x18d4
	// void m_flAttackRate; // 0x18d8
	// void m_vLastTargetPos; // 0x18dc
};

