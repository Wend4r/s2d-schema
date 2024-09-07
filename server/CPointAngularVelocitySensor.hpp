#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4d8	
	float m_flThreshold; // 0x4dc	
	int32_t m_nLastCompareResult; // 0x4e0	
	int32_t m_nLastFireResult; // 0x4e4	
	GameTime_t m_flFireTime; // 0x4e8	
	float m_flFireInterval; // 0x4ec	
	float m_flLastAngVelocity; // 0x4f0	
	QAngle m_lastOrientation; // 0x4f4	
	Vector m_vecAxis; // 0x500	
	bool m_bUseHelper; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x510	
	CEntityIOOutput m_OnLessThan; // 0x538	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x560	
	CEntityIOOutput m_OnGreaterThan; // 0x588	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5b0	
	CEntityIOOutput m_OnEqualTo; // 0x5d8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

