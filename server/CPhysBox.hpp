#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x820	
	float m_massScale; // 0x824	
	int32_t m_damageToEnableMotion; // 0x828	
	float m_flForceToEnableMotion; // 0x82c	
	QAngle m_angPreferredCarryAngles; // 0x830	
	bool m_bNotSolidToWorld; // 0x83c	
	bool m_bEnableUseOutput; // 0x83d	
private:
	[[maybe_unused]] uint8_t __pad083e[0x2]; // 0x83e
public:
	int32_t m_iExploitableByPlayer; // 0x840	
	float m_flTouchOutputPerEntityDelay; // 0x844	
	CEntityIOOutput m_OnDamaged; // 0x848	
	CEntityIOOutput m_OnAwakened; // 0x870	
	CEntityIOOutput m_OnMotionEnabled; // 0x898	
	CEntityIOOutput m_OnPlayerUse; // 0x8c0	
	CEntityIOOutput m_OnStartTouch; // 0x8e8	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x910	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

