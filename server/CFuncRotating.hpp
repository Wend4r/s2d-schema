#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime CBaseEntity"
class CFuncRotating : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStopped; // 0x748	
	CEntityIOOutput m_OnStarted; // 0x770	
	CEntityIOOutput m_OnReachedStart; // 0x798	
	RotationVector m_localRotationVector; // 0x7c0	
	float m_flFanFriction; // 0x7cc	
	float m_flAttenuation; // 0x7d0	
	float m_flVolume; // 0x7d4	
	float m_flTargetSpeed; // 0x7d8	
	float m_flMaxSpeed; // 0x7dc	
	float m_flBlockDamage; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_NoiseRunning; // 0x7e8	
	bool m_bReversed; // 0x7f0	
	bool m_bAccelDecel; // 0x7f1	
private:
	[[maybe_unused]] uint8_t __pad07f2[0xa]; // 0x7f2
public:
	QAngle m_prevLocalAngles; // 0x7fc	
	QAngle m_angStart; // 0x808	
	bool m_bStopAtStartPos; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	Vector m_vecClientOrigin; // 0x818	
	QAngle m_vecClientAngles; // 0x824	
	
	// Datamap fields:
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
	// void m_nNoiseRunningGuid; // 0x7f4
	// int32_t fanfriction; // 0x7fffffff
	// int32_t Volume; // 0x7fffffff
};

