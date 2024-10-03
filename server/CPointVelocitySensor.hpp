#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e0	
	Vector m_vecAxis; // 0x4e4	
	bool m_bEnabled; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f1[0x3]; // 0x4f1
public:
	float m_fPrevVelocity; // 0x4f4	
	float m_flAvgInterval; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CEntityOutputTemplate< float32 > m_Velocity; // 0x500	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

