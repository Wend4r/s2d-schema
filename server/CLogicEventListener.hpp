#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CLogicEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	CUtlString m_strEventName; // 0x4f0	
	bool m_bIsEnabled; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
public:
	int32_t m_nTeam; // 0x4fc	
	CEntityIOOutput m_OnEventFired; // 0x500	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

