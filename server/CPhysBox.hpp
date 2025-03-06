#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x890	
	int32_t m_damageToEnableMotion; // 0x894	
	float m_flForceToEnableMotion; // 0x898	
	Vector m_vHoverPosePosition; // 0x89c	
	QAngle m_angHoverPoseAngles; // 0x8a8	
	bool m_bNotSolidToWorld; // 0x8b4	
	bool m_bEnableUseOutput; // 0x8b5	
	HoverPoseFlags_t m_nHoverPoseFlags; // 0x8b6	
private:
	[[maybe_unused]] uint8_t __pad08b7[0x1]; // 0x8b7
public:
	float m_flTouchOutputPerEntityDelay; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08bc[0x4]; // 0x8bc
public:
	CEntityIOOutput m_OnDamaged; // 0x8c0	
	CEntityIOOutput m_OnAwakened; // 0x8e8	
	CEntityIOOutput m_OnMotionEnabled; // 0x910	
	CEntityIOOutput m_OnPlayerUse; // 0x938	
	CEntityIOOutput m_OnStartTouch; // 0x960	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x988	
	
	// Datamap fields:
	// QAngle preferredcarryangles; // 0x7fffffff
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
};

