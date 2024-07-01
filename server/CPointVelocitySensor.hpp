#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CPointVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b8	
	Vector m_vecAxis; // 0x4bc	
	bool m_bEnabled; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04c9[0x3]; // 0x4c9
public:
	float m_fPrevVelocity; // 0x4cc	
	float m_flAvgInterval; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CEntityOutputTemplate< float32 > m_Velocity; // 0x4d8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

