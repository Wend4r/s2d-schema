#pragma once

#include <cstdint>

struct CMotorController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPhysMotor : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e0	
	CUtlSymbolLarge m_nameAnchor; // 0x4e8	
	CHandle< CBaseEntity > m_hAttachedObject; // 0x4f0	
	float m_spinUp; // 0x4f4	
	float m_spinDown; // 0x4f8	
	float m_flMotorFriction; // 0x4fc	
	float m_additionalAcceleration; // 0x500	
	float m_angularAcceleration; // 0x504	
	float m_flTorqueScale; // 0x508	
	float m_flTargetSpeed; // 0x50c	
	float m_flSpeedWhenSpinUpOrSpinDownStarted; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x14]; // 0x514
public:
	CMotorController m_motor; // 0x528	
	
	// Datamap fields:
	// void m_pFixedWorldBody; // 0x518
	// void m_pMotorJoint; // 0x520
	// float InputSetTargetSpeed; // 0x0
	// float InputSetFriction; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

