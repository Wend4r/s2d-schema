#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
class CLogicGameEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	CEntityIOOutput m_OnEventFired; // 0x4f0	
	CUtlSymbolLarge m_iszGameEventName; // 0x518	
	CUtlSymbolLarge m_iszGameEventItem; // 0x520	
	// MNetworkEnable
	bool m_bEnabled; // 0x528	
	bool m_bStartDisabled; // 0x529	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

