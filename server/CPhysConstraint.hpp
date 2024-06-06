#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// Is Abstract
class CPhysConstraint : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4c8	
	CUtlSymbolLarge m_nameAttach2; // 0x4d0	
	CHandle< CBaseEntity > m_hAttach1; // 0x4d8	
	CHandle< CBaseEntity > m_hAttach2; // 0x4dc	
	CUtlSymbolLarge m_nameAttachment1; // 0x4e0	
	CUtlSymbolLarge m_nameAttachment2; // 0x4e8	
	CUtlSymbolLarge m_breakSound; // 0x4f0	
	float m_forceLimit; // 0x4f8	
	float m_torqueLimit; // 0x4fc	
	uint32_t m_teleportTick; // 0x500	
	float m_minTeleportDistance; // 0x504	
	bool m_bSnapObjectPositions; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x7]; // 0x509
public:
	CEntityIOOutput m_OnBreak; // 0x510	
	
	// Datamap fields:
	// void m_hJoint; // 0x4c0
	// void InputBreak; // 0x0
	// void InputOnBreak; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableLinearConstraint; // 0x0
	// void InputDisableLinearConstraint; // 0x0
	// void InputEnableAngularConstraint; // 0x0
	// void InputDisableAngularConstraint; // 0x0
	// void InputTurnMotorOn; // 0x0
	// void InputTurnMotorOff; // 0x0
	// float InputSetMotorTorqueFactor; // 0x0
	// float InputSetMotorTargetVelocity; // 0x0
};

