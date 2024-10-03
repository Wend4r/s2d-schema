#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
// Is Abstract
class CPhysConstraint : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4e8	
	CUtlSymbolLarge m_nameAttach2; // 0x4f0	
	CHandle< CBaseEntity > m_hAttach1; // 0x4f8	
	CHandle< CBaseEntity > m_hAttach2; // 0x4fc	
	CUtlSymbolLarge m_nameAttachment1; // 0x500	
	CUtlSymbolLarge m_nameAttachment2; // 0x508	
	CUtlSymbolLarge m_breakSound; // 0x510	
	float m_forceLimit; // 0x518	
	float m_torqueLimit; // 0x51c	
	uint32_t m_teleportTick; // 0x520	
	float m_minTeleportDistance; // 0x524	
	bool m_bSnapObjectPositions; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x7]; // 0x529
public:
	CEntityIOOutput m_OnBreak; // 0x530	
	
	// Datamap fields:
	// void m_hJoint; // 0x4e0
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

