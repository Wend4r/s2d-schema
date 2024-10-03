#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	Vector m_worldGoalAxis; // 0x4e8	
	Vector m_localTestAxis; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad0500[0x8]; // 0x500
public:
	CUtlSymbolLarge m_nameAttach; // 0x508	
	CHandle< CBaseEntity > m_attachedObject; // 0x510	
	float m_angularLimit; // 0x514	
	bool m_bActive; // 0x518	
	bool m_bDampAllRotation; // 0x519	
	
	// Datamap fields:
	// void m_pController; // 0x500
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetAngularLimit; // 0x0
};

