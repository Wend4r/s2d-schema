#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x7e8	
	float m_massScale; // 0x7ec	
	int32_t m_damageToEnableMotion; // 0x7f0	
	float m_flForceToEnableMotion; // 0x7f4	
	QAngle m_angPreferredCarryAngles; // 0x7f8	
	bool m_bNotSolidToWorld; // 0x804	
	bool m_bEnableUseOutput; // 0x805	
private:
	[[maybe_unused]] uint8_t __pad0806[0x2]; // 0x806
public:
	int32_t m_iExploitableByPlayer; // 0x808	
	float m_flTouchOutputPerEntityDelay; // 0x80c	
	CEntityIOOutput m_OnDamaged; // 0x810	
	CEntityIOOutput m_OnAwakened; // 0x838	
	CEntityIOOutput m_OnMotionEnabled; // 0x860	
	CEntityIOOutput m_OnPlayerUse; // 0x888	
	CEntityIOOutput m_OnStartTouch; // 0x8b0	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x8d8	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

