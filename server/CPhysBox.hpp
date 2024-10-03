#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x938
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x828	
	int32_t m_damageToEnableMotion; // 0x82c	
	float m_flForceToEnableMotion; // 0x830	
	QAngle m_angPreferredCarryAngles; // 0x834	
	bool m_bNotSolidToWorld; // 0x840	
	bool m_bEnableUseOutput; // 0x841	
private:
	[[maybe_unused]] uint8_t __pad0842[0x2]; // 0x842
public:
	int32_t m_iExploitableByPlayer; // 0x844	
	float m_flTouchOutputPerEntityDelay; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	CEntityIOOutput m_OnDamaged; // 0x850	
	CEntityIOOutput m_OnAwakened; // 0x878	
	CEntityIOOutput m_OnMotionEnabled; // 0x8a0	
	CEntityIOOutput m_OnPlayerUse; // 0x8c8	
	CEntityIOOutput m_OnStartTouch; // 0x8f0	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x918	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

