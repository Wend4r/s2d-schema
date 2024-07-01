#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e0
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b8	
	float m_flThreshold; // 0x4bc	
	int32_t m_nLastCompareResult; // 0x4c0	
	int32_t m_nLastFireResult; // 0x4c4	
	GameTime_t m_flFireTime; // 0x4c8	
	float m_flFireInterval; // 0x4cc	
	float m_flLastAngVelocity; // 0x4d0	
	QAngle m_lastOrientation; // 0x4d4	
	Vector m_vecAxis; // 0x4e0	
	bool m_bUseHelper; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4f0	
	CEntityIOOutput m_OnLessThan; // 0x518	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x540	
	CEntityIOOutput m_OnGreaterThan; // 0x568	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x590	
	CEntityIOOutput m_OnEqualTo; // 0x5b8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

