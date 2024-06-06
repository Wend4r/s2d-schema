#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0	
	float m_flThreshold; // 0x4c4	
	int32_t m_nLastCompareResult; // 0x4c8	
	int32_t m_nLastFireResult; // 0x4cc	
	GameTime_t m_flFireTime; // 0x4d0	
	float m_flFireInterval; // 0x4d4	
	float m_flLastAngVelocity; // 0x4d8	
	QAngle m_lastOrientation; // 0x4dc	
	Vector m_vecAxis; // 0x4e8	
	bool m_bUseHelper; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4f8	
	CEntityIOOutput m_OnLessThan; // 0x520	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x548	
	CEntityIOOutput m_OnGreaterThan; // 0x570	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x598	
	CEntityIOOutput m_OnEqualTo; // 0x5c0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

