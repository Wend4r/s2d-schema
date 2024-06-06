#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime CBaseEntity"
class CFuncRotating : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStopped; // 0x710	
	CEntityIOOutput m_OnStarted; // 0x738	
	CEntityIOOutput m_OnReachedStart; // 0x760	
	RotationVector m_localRotationVector; // 0x788	
	float m_flFanFriction; // 0x794	
	float m_flAttenuation; // 0x798	
	float m_flVolume; // 0x79c	
	float m_flTargetSpeed; // 0x7a0	
	float m_flMaxSpeed; // 0x7a4	
	float m_flBlockDamage; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07ac[0x4]; // 0x7ac
public:
	CUtlSymbolLarge m_NoiseRunning; // 0x7b0	
	bool m_bReversed; // 0x7b8	
	bool m_bAccelDecel; // 0x7b9	
private:
	[[maybe_unused]] uint8_t __pad07ba[0xa]; // 0x7ba
public:
	QAngle m_prevLocalAngles; // 0x7c4	
	QAngle m_angStart; // 0x7d0	
	bool m_bStopAtStartPos; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07dd[0x3]; // 0x7dd
public:
	Vector m_vecClientOrigin; // 0x7e0	
	QAngle m_vecClientAngles; // 0x7ec	
	
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
	// void m_nNoiseRunningGuid; // 0x7bc
	// int32_t fanfriction; // 0x7fffffff
	// int32_t Volume; // 0x7fffffff
};

