#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CLogicEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x10]; // 0x4c0
public:
	CUtlString m_strEventName; // 0x4d0	
	bool m_bIsEnabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	int32_t m_nTeam; // 0x4dc	
	CEntityIOOutput m_OnEventFired; // 0x4e0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

