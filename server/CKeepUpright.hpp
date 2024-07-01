#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	Vector m_worldGoalAxis; // 0x4c0	
	Vector m_localTestAxis; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e0	
	CHandle< CBaseEntity > m_attachedObject; // 0x4e8	
	float m_angularLimit; // 0x4ec	
	bool m_bActive; // 0x4f0	
	bool m_bDampAllRotation; // 0x4f1	
	
	// Datamap fields:
	// void m_pController; // 0x4d8
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetAngularLimit; // 0x0
};

