#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	Vector m_worldGoalAxis; // 0x4c8	
	Vector m_localTestAxis; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e8	
	CHandle< CBaseEntity > m_attachedObject; // 0x4f0	
	float m_angularLimit; // 0x4f4	
	bool m_bActive; // 0x4f8	
	bool m_bDampAllRotation; // 0x4f9	
	
	// Datamap fields:
	// void m_pController; // 0x4e0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetAngularLimit; // 0x0
};

