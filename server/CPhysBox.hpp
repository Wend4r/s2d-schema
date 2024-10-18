#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x868	
	int32_t m_damageToEnableMotion; // 0x86c	
	float m_flForceToEnableMotion; // 0x870	
	QAngle m_angPreferredCarryAngles; // 0x874	
	bool m_bNotSolidToWorld; // 0x880	
	bool m_bEnableUseOutput; // 0x881	
private:
	[[maybe_unused]] uint8_t __pad0882[0x2]; // 0x882
public:
	int32_t m_iExploitableByPlayer; // 0x884	
	float m_flTouchOutputPerEntityDelay; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad088c[0x4]; // 0x88c
public:
	CEntityIOOutput m_OnDamaged; // 0x890	
	CEntityIOOutput m_OnAwakened; // 0x8b8	
	CEntityIOOutput m_OnMotionEnabled; // 0x8e0	
	CEntityIOOutput m_OnPlayerUse; // 0x908	
	CEntityIOOutput m_OnStartTouch; // 0x930	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x958	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

