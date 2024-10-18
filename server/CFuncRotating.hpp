#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x878
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime CBaseEntity"
class CFuncRotating : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStopped; // 0x790	
	CEntityIOOutput m_OnStarted; // 0x7b8	
	CEntityIOOutput m_OnReachedStart; // 0x7e0	
	RotationVector m_localRotationVector; // 0x808	
	float m_flFanFriction; // 0x814	
	float m_flAttenuation; // 0x818	
	float m_flVolume; // 0x81c	
	float m_flTargetSpeed; // 0x820	
	float m_flMaxSpeed; // 0x824	
	float m_flBlockDamage; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	CUtlSymbolLarge m_NoiseRunning; // 0x830	
	bool m_bReversed; // 0x838	
	bool m_bAccelDecel; // 0x839	
private:
	[[maybe_unused]] uint8_t __pad083a[0xa]; // 0x83a
public:
	QAngle m_prevLocalAngles; // 0x844	
	QAngle m_angStart; // 0x850	
	bool m_bStopAtStartPos; // 0x85c	
private:
	[[maybe_unused]] uint8_t __pad085d[0x3]; // 0x85d
public:
	Vector m_vecClientOrigin; // 0x860	
	QAngle m_vecClientAngles; // 0x86c	
	
	// Datamap fields:
	// bool movewithoutpushingblockers; // 0x7fffffff
	// void CFuncRotatingSpinUpMove; // 0x0
	// void CFuncRotatingSpinDownMove; // 0x0
	// void CFuncRotatingHurtTouch; // 0x0
	// void CFuncRotatingRotatingUse; // 0x0
	// void CFuncRotatingRotateMove; // 0x0
	// void CFuncRotatingReverseMove; // 0x0
	// float InputSetSpeed; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
	// void InputReverse; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartBackward; // 0x0
	// void InputStopAtStartPos; // 0x0
	// void InputSnapToStartPos; // 0x0
	// Vector InputSetStartPos; // 0x0
	// void InputEnableAccelDecel; // 0x0
	// void InputDisableAccelDecel; // 0x0
	// void m_nNoiseRunningGuid; // 0x83c
	// int32_t fanfriction; // 0x7fffffff
	// int32_t Volume; // 0x7fffffff
};

