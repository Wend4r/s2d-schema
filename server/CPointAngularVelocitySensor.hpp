#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x608
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e0	
	float m_flThreshold; // 0x4e4	
	int32_t m_nLastCompareResult; // 0x4e8	
	int32_t m_nLastFireResult; // 0x4ec	
	GameTime_t m_flFireTime; // 0x4f0	
	float m_flFireInterval; // 0x4f4	
	float m_flLastAngVelocity; // 0x4f8	
	QAngle m_lastOrientation; // 0x4fc	
	Vector m_vecAxis; // 0x508	
	bool m_bUseHelper; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x518	
	CEntityIOOutput m_OnLessThan; // 0x540	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x568	
	CEntityIOOutput m_OnGreaterThan; // 0x590	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5b8	
	CEntityIOOutput m_OnEqualTo; // 0x5e0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

